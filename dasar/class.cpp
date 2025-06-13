#include <iostream>
using namespace std ;

// membuat tipe class Event berdasarkan tanggal
class Event {

	// private access
private:

	// deskripsi acara
	string EventDesc ;

// public access
public:

	// tanggal
	int d ;
	// bulan
	int m ;
	// tahun
	int y ;

	// uint8_t digunakan untuk bilangan bulat non-negatif dengan capasitas 255
	// uint16_t digunakan untuk bilangan bulat non-negatif dengan capasitas 65535

	// Constructor kosong
	Event() : d(0), m(0), y(0), EventDesc("NONE") {}
	// Constructor lengkap
	Event(int date, int month, int year, string EventDesc)
	 : d(date), m(month), y(year), EventDesc(EventDesc) {}
	// constructor dari teks
	// format tanggal day-month-tahun
	Event(string date, string EventDesc) {
		this->d = stoi(date.substr(0, 2)) ; // ambil substring yang compatibel konversi angka
		this->m = stoi(date.substr(3, 4)) ; // ambil substring yang compatibel konversi angka
		this->y = stoi(date.substr(6, 9)) ; // ambil substring yang compatibel konversi angka
		this->EventDesc = EventDesc ;
	}
	// atur, edit event
	Event& setEvent(string EventDesc) { // function atau method dengan return type pointer(alamat) dari class event
		this->EventDesc = EventDesc ;
		return *this ; // me-return type Event yang merujuk ke dirinya sendiri
	}
	// ambil data Event
	string getEventDesc() {
		return this->EventDesc ;
	}
	// operator == untuk pengecekan apakah datanya sama atau beda
	bool operator==(const Event& otherEvent) const { 
		return (
			this->EventDesc == otherEvent.EventDesc &&
			this->d == otherEvent.d &&
			this->m == otherEvent.m &&
			this->y == otherEvent.y
		) ;
	}
	// operator == untuk pengecekan apakah datanya beda atau sama
	bool operator!=(const Event& otherEvent) const {
		return !(*this == otherEvent) ; // membandingkan value dari alamat dirinya sendiri dengan OtherEvent.
	}
} ;

int main() {
	Event timeline[5] = {
		{"05-05-2025", "Mengaji"} ,
		{"06-06-2025", "Menyapu"} ,
		{"07-07-2025", "Mengepel"} ,
		{"08-08-2025", "Menyuci"} ,
		{"09-09-2025", "Mengelap"} ,
	} ;

	for(int i = 0; i < 5; i++) {
		cout << timeline[i].d << "-"<< timeline[i].m << "-"<< timeline[i].y << "\t" << timeline[i].getEventDesc() << "\n" ;
	}

	return 0 ;
}