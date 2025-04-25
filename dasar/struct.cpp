#include <iostream>
using namespace std;

// struct bisa di disebut stuktur, dapat menyimpan berbagai type data
// membuat struktur pegawai
// syntax: struct nama_objek { anggota1, anggota2, ...... };
struct Pegawai{ 
	string nama;
	string NIP;
	int gaji;
};

void show(Pegawai p);

int main(){
	Pegawai p1, p2; // deklarasi p1, p2 dengan objek Pegawai atau bisa disebut tipe data agar mudah.

	// cara mengisi objek Pegawai ada 2 cara:
	// cara 1 yaitu mengisi satu per satu
	// cara mengakses anggota dari objek Pegawai dengan menggunakan operator '.'
	// syntax: obj.anggota;
	p1.nama = "Rizky";
	p1.NIP = "1234";
	p1.gaji = 1000000;

	// cara 2 yaitu mengisi langsung semua anggotanya sesuai urutan
	p2 = {"Ayu", "1324", 2000000};

	// cara menampilkan objek pegawai yang telah diisi
	cout << "Nama\t: "   << p1.nama <<
			"\nNIP\t: "  << p1.NIP  <<
			"\nGaji\t: " << p1.gaji << endl;

	// bisa juga dengan menggunakan function
	show(p2);
}

void show(Pegawai p){
	cout << "\n------------------------------------\n";
	cout << "Nama\t: "   << p.nama <<
			"\nNIP\t: "  << p.NIP  <<
			"\nGaji\t: " << p.gaji << endl;
}