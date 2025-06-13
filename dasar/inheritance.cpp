#include <iostream>
using namespace std ;

class Electronics { // membuat tipe class barang elektronik
public: // public access
	static string ClassName() { // fungsi static yang dimana fungsi dapat dipanggil tanpa perlu membuat objek class
		return "Electronic" ;
	}
} ;

class Smartphone : public Electronics { // class type Samrtphone adalah turunan dari class Electronic
public : // public access
	void print() {
		cout << "[" << ClassName() << "] ini Smartphone "; // fungsi ClassName diturunkan dari kelas induk
	}
} ;


int main() {
	// mencetak type kelas Electronic tanpa membuat objek dengan tipe class elektronics
	cout << Electronics::ClassName() << "\n" ;
	Smartphone Lenovo; // membuat objek dengan tipe kelas Smartphone
	Lenovo.print(); // memanggil fungsi print di dalam objek lenovo
}