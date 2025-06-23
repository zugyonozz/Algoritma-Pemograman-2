#include <iostream>
using namespace std ;

// membuat tipe class Event berdasarkan tanggal
class Event {
private: // private access
	string EventDesc ; // deskripsi acara
public: // public access
	int d ; // tanggal
	int m ; // bulan
	int y ; // tahun
	Event() : d(0), m(0), y(0), EventDesc("NONE") {} // Constructor kosong
	Event(int date, int month, int year, string EventDesc) // Constructor lengkap
	 : d(date), m(month), y(year), EventDesc(EventDesc) {}
	// atur, edit event
	Event& setEvent(string EventDesc) { // function atau method dengan return type pointer(alamat) dari class event
		this->EventDesc = EventDesc ;
		return *this ; // me-return type Event yang merujuk ke dirinya sendiri
	}
	string getEventDesc() { // ambil data Event
		return this->EventDesc ;
	}
	void getEventDetails() { // cetak semua atribut event
		cout << d << "/" << m << "/" << y << " - " << EventDesc << "\n" ;
	}
} ;

int main() {
	Event timeline[5] = {
		{5, 5, 2025, "Mengaji"} ,
		{6, 6, 2025, "Menyapu"} ,
		{7, 7, 2025, "Mengepel"} ,
		{8, 8, 2025, "Menyuci"} ,
		{9, 9, 2025, "Mengelap"} ,
	} ;
	for(int i = 0; i < 5; i++) {
		timeline[i].getEventDetails() ;
	}

	return 0 ;
}
