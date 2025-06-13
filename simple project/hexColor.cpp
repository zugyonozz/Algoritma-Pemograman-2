#include <iostream>
#include <cstdint>
using namespace std;

using Uint8 = uint8_t ; // alias uint8_t adalah Uint8

class Color {
private:
	Uint8 r, g, b, a ;
public:
	// empty constructor
	Color() : r(0), g(0), b(0), a(0) {}
	// specifics constructor
	Color(Uint8 r, Uint8 g, Uint8 b, Uint8 a) : r(r), g(g), b(b), a(a) {}
	// getColor
	void print() {
		cout << "[Color] (" 
		<< static_cast<int>(this->r) << ", " 
		<< static_cast<int>(this->g) << ", " 
		<< static_cast<int>(this->b) << ", " 
		<< static_cast<int>(this->a) << ") " ;
	}
} ;

int main() {
	Color c = {255, 255, 255, 255};
	c.print();
}