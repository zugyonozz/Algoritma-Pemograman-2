#include <iostream>

class Math {
public:
	template <typename T> static int RoundUp(const T floating_value) {
		return floating_value + 1;
	}
	template <typename T> static int RoundDown(const T floating_value) {
		return floating_value;
	}
	template <typename T, size_t N> static T sum(const T (&n)[N]) {
		T ret = n[0];
		for(int i = 1; i < N; i++) {
			ret += n[i] ;
		}
		return ret ;
	}
	template <typename T, size_t N> static double avg(const T (&n)[N]) {
		T ret = sum(n);
		return ret / N ;
	}
} ;

int main () {
	double d = 0.000001;
	std::cout << "[Math] RoundDown\t: " << Math::RoundDown(d) << "\n";
	std::cout << "[Math] RoundUp\t\t: " << Math::RoundUp(d) << "\n" ;
	float fs[5] = {1.1f, 1.2f, 1.3f, 1.4f, 1.5f} ;
	std::cout << "[Math] sum\t\t: " << Math::sum(fs) << "\n" ;
	std::cout << "[Math] sum\t\t: " << Math::avg(fs) << "\n" ;
}