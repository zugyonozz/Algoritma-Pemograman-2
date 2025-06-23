#include <iostream>
using namespace std ;

// membuat tipe class barang elektronik
class Electronics { 
public: // public access
// fungsi static yang dimana fungsi dapat dipanggil tanpa perlu membuat objek class
	static string ClassName() { 
		return "Electronic" ;
	}
} ;

// class type Samrtphone adalah turunan dari class Electronic
class Smartphone : public Electronics { 
public : // public access
	void print() {
		// fungsi ClassName diturunkan dari kelas induk
		cout << "[" << ClassName() << "] ini Smartphone "; 
	}
} ;

int main() {
	// mencetak type kelas Electronic tanpa membuat objek dengan tipe class elektronics
	cout << Electronics::ClassName() << "\n" ;
	// membuat objek dengan tipe kelas Smartphone
	Smartphone Lenovo; 
	// memanggil fungsi print di dalam objek `Lenovo`
	Lenovo.print(); 
}