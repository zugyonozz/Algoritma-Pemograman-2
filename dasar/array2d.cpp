#include <iostream>
using namespace std;

int main(){
	// array 2d itu sama seperti matrix
	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6}, // -----------------------------------> matrix 3x3
		{7, 8, 9}
	};

	// Mencari nilai tertinggi matrix
	int temp = 0; // -----------------------------------> inisialisasi variabel penampung untuk mancari dibanding kan dgn elemen selanjutnya
	for(int col = 0; col < 3; col++){ // ---------------> col = kolom, row = baris
		for(int row = 0; row < 3; row++){
			if(matrix[col][row] > temp){
				temp = matrix[col][row]; //-------------> isi temp dengan nilai matrix pasa iterasi saat ini
			}
		}
	}
	cout << "Nilai tertinggi dari matrix adalah : " << temp << endl;

	// operasi penjumlahan matrix1 dan matrix2
	int matrix2[3][3] = {
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};

	int hasil[3][3];

	for(int col = 0; col < 3; col++){
		for(int row = 0; row < 3; row++){
			hasil[col][row] = matrix[col][row] + matrix2[col][row]; // -------------> hasil = matrix1 + matrix2 pada iterasi saat ini
		}
	}

	cout << "Hasil penjumlahan matrix adalah : " << endl;
	for(int col = 0; col < 3; col++){
		for(int row = 0; row < 3; row++){
			cout << hasil[col][row] << " "; // -------------> print hasil penjumlahan matrix
		}
		cout << endl;
	}
}