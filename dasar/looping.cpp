#include <iostream>
using namespace std;

int main(){
	cout << "segitiga\n";

	// segitiga 1
	cout << "---------------------------------------\n";
	for(int i = 0; i < 5; i++){ // ---------------------> kolom
		for(int j = 0; j <= i; j++){ // ----------------> baris jumlah baris meningkat seiring bertambahnya 'int i'
			cout << "* ";
		}
		cout << endl; // -------------------------------> buat baris baru agar deretan bintang selanjutnya di buat di baris selanjutnya
	}
	// segitiga 2
	cout << "---------------------------------------\n";
	for(int i = 5; i > 0; i--){
		for(int j = i; j > 0; j--){
			cout << "* ";
		}
		cout << endl;
	}
	// segitiga 3
	cout << "---------------------------------------\n";
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < i; j++){ // -----------------> jumlah spasi bertambah seiring bertambahnya 'int i'
			cout << "  ";
		}
		for(int k = 5; k > i; k--){ // -----------------> jumlah bintang berkurang seiring bertambahnya 'int i'
			cout << "* ";
		}
		cout << endl;
	}
	// segitiga 4
	cout << "---------------------------------------\n";
	for(int i = 0; i < 5; i++){
		for(int j = 5; j > i+1; j--){ // -----------------> jumlah spasi berkurang seiring bertambahnya 'int i'
			cout << "  ";
		}
		for(int k = 0; k < i+1; k++){ // -----------------> jumlah bintang bertambah seiring bertambahnya 'int i'
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}