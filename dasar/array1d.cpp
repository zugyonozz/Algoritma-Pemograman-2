#include <iostream>
using namespace std;

int main(){
	// initisialisasi array dengan tipe data integer
	int arr[7] = {1, 2, 3, 4, 5, 6, 7};

	// initisialisasi array dengan tipe data string
	string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};

	// deklarasi array int dengan kapasitas 5 elemen
	int angka[5];

	// tampilkan semua elemen array dengan perulangan
	for(int i = 0; i < 7; i++){
		cout << arr[i] << ". " << hari[i] << endl;
	}

	// isi array manual (satu per satu) sesuai indeks
	angka[0] = 5;
	angka[1] = 4;
	angka[2] = 3;
	angka[3] = 2;
	angka[4] = 1;

	// tampilkan semua elemen array dengan perulangan
	for(int i = 0; i < 5; i++){
		cout << angka[i] << endl;
	}

	return 0;
}