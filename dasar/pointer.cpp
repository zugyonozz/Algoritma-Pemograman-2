#include <iostream>
using namespace std ;

int main() {
/*
----------- CLUE -----------
operator '&' -> mendapatkan alamat dari suatu variabel.
operator '*' -> mendapatkan nilai dari alamat suatu variabel.

---------- VISUAL ----------

Alamat	: 	   0x01				    0x02
Nilai	: 	  x = 3			  y* = 3, y = 0x01
Blok	: -------------		  ---------------
		 |  int x = 3  | --> |  int* y = &x  |
		  -------------		  ---------------
*/

	int x = 3 ;
	int* y = &x ;
	int** z = &y ;
	cout << "value dari x\t\t\t\t: " << x << "\n" ;
	cout << "Alamat dari x\t\t\t\t: " << y << "\n" ;
	cout << "value dari y yang merujuk ke x\t\t: " << *y << "\n" ;
	cout << "Alamat dari y\t\t\t\t: " << z << "\n" ;
	cout << "Value dari z yang merujuk z -> y -> x\t: " << **z << "\n" ;
}