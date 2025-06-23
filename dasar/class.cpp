#include <iostream>
using namespace std ;

// membuat tipe class Event berdasarkan tanggal
class Event {
private: // private access
	// deskripsi acara
	string eventDesc ;
	// tanggal
	int d ;
	// bulan
	int m ;
	// tahun
	int y ;

public: // public access
	// Constructor kosong
	Event() : d(0), m(0), y(0), eventDesc("NONE") {}

	// Constructor lengkap
	Event(int date, int month, int year, string eventDesc) : d(date), m(month), y(year), eventDesc(eventDesc) {}

	// atur, edit event
	// function atau method dengan return type pointer(alamat) dari class event
	void setEvent(string eventDesc) {  this->eventDesc = eventDesc ; }

	// ambil data Event
	// return type adalah string
	string getEventDesc() { return this->eventDesc ; }

	// geteventDetails adalah fungsi yang mencetak semua atribut event
	void geteventDetails() {
		cout << d << "/"<< m << "/"<< y << " - " << eventDesc << "\n" ;
	}
} ;

int main() {
	// syntax : type_class nama_object argument_constructor
	Event timeline[5] = {
		{5, 5, 2025, "Mengaji"} ,
		{6, 6, 2025, "Menyapu"} ,
		{7, 7, 2025, "Mengepel"} ,
		{8, 8, 2025, "Menyuci"} ,
		{9, 9, 2025, "Mengelap"} ,
	} ;
	for(int i = 0; i < 5; i++) {
		// panggil fungsi getEventDetails secara iteratif
		timeline[i].geteventDetails() ;
	}
	return 0 ;
}