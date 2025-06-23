#include <iostream>
using namespace std ;

// induk Kelas
// class Orang tanpa job
class Person {
protected :
	// deklarasi variabel name
	string name ;
public :
	// constructor
	Person(string name) : name(name) {}

	// print semua atribut Person
	virtual void print() {
		cout << "Nama\t\t: " << this->name << "\n" ;
	}
} ;

// turunan Kelas Person
// class Fisherman job mancing
class Fisherman : public Person {
private :
	// deklarasi variabel tool
	string tool ;
public :
	// Constructor
	Fisherman(string name, string tool) : Person(name), tool(tool) {}

	// print semua atribut Fisherman
	void print() override {
		Person::print() ;
		cout << "Alat\t\t: " << this->tool << "\n" ;
	}
} ;

// turunan Kelas Person
// class Singer job Penyanyi
class Singer : public Person {
private :
	// deklarasi variabel level oktaf
	int octafLv ;
public :
	// Constructor
	Singer(string name, int octafLv) : Person(name), octafLv(octafLv) {}

	// print semua atribut Fisherman
	void print() override {
		Person::print() ;
		cout << "Level Oktaf\t: " << this->octafLv << "\n" ;
	}
} ;

int main() {
	Singer MaudyAyunda("Maudy Ayunda", 8) ;
	MaudyAyunda.print() ;
	Fisherman zuu("zuu", "Jaring") ;
	zuu.print() ;
}