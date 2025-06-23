#include <iostream>
using namespace std;

int main(){
	// array 2d itu sama seperti matrix
	// dibawah ini adalah representasi dari matrix 3x3
	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// Mencari nilai tertinggi matrix
	// inisialisasi variabel penampung untuk mancari dibanding kan dgn elemen selanjutnya
	int temp = 0;
	// col = kolom
	for(int col = 0; col < 3; col++){ 
		// row = baris
		for(int row = 0; row < 3; row++){
			// aturan dimana isi matrix lebih dari nilai temp maka nilai temp diisi dengan isi matrix saat ini
			if(matrix[col][row] > temp) {
				// isi temp dengan nilai matrix pasa iterasi saat ini
				temp = matrix[col][row];
			}
		}
	}
	cout << "Nilai tertinggi dari matrix adalah : " << temp << endl;

	// operasi penjumlahan matrix1 dan matrix2

	// initialisisasi matrix 3x3 ke dua
	int matrix2[3][3] = {
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};

	// deklarasi matrix 3x3 untuk wadah penampung hasil tambah matrix1 dan matrix2
	int hasil[3][3];

	for(int col = 0; col < 3; col++){
		for(int row = 0; row < 3; row++){
			// hasil = matrix1 + matrix2 pada iterasi saat ini
			hasil[col][row] = matrix[col][row] + matrix2[col][row];
		}
	}

	cout << "Hasil penjumlahan matrix adalah : " << endl;
	for(int col = 0; col < 3; col++){
		for(int row = 0; row < 3; row++){
			// print hasil penjumlahan matrix
			cout << hasil[col][row] << " "; 
		}
		cout << endl;
	}
}