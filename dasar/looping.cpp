#include <iostream>
using namespace std;

int main(){
	cout << "segitiga\n";

	// segitiga 1
	cout << "---------------------------------------\n";

	// kolom
	for(int i = 0; i < 5; i++){

		// baris jumlah baris meningkat seiring bertambahnya 'int i'
		for(int j = 0; j <= i; j++){ 
			cout << "* ";
		}

		// buat baris baru agar deretan bintang selanjutnya di buat di baris selanjutnya
		cout << endl; 
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
	
		// jumlah spasi bertambah seiring bertambahnya 'int i'
		for(int j = 0; j < i; j++){ 
			cout << "  ";
	
		}
		// jumlah bintang berkurang seiring bertambahnya 'int i'
		for(int k = 5; k > i; k--){
			cout << "* ";
		}
		cout << endl;
	}
	
	// segitiga 4
	cout << "---------------------------------------\n";
	for(int i = 0; i < 5; i++){

		// jumlah spasi berkurang seiring bertambahnya 'int i'
		for(int j = 5; j > i+1; j--){ 
			cout << "  ";
		}

		// jumlah bintang bertambah seiring bertambahnya 'int i'
		for(int k = 0; k < i+1; k++){ 
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}