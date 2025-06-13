#include <iostream>
using namespace std ;

class MathFunc {
public:
	double sum(double* n, int len) {
		double sum = 0;
		for (size_t i = 0; i < len; ++i) {
			sum += n[i];
		}
		return sum;
	}
};

class Integral : public MathFunc {
public:
	int sum(const int* n, int len) {
		double sum = 0;
		for (size_t i = 0; i < len; ++i) {
			sum += n[i];
		}
		return sum;
	}
} ;

int main() {
	Integral i ;
	int n[5] = {1, 2, 3, 4, 5};
	cout << i.sum(n, 5) << endl;
	double d[5] = {1.5, 2, 3, 4, 5};
	cout << i.MathFunc::sum(d, 5) << endl;
}
