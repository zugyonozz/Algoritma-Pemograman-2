#include <iostream>
using namespace std;

struct Mhs{							// deklarasi struktur Mhs
	string Nama;
	string NIM;
	int semester;
};

Mhs listMhs[100];					// listMhs adalah array untuk menyimpan data Objek Mhs
int cap = 0;						// cap adalah capacity

void inputMhs(int id);
void showMhs(int id);
void showAll();
int getIdMhsFound(string target);

int main(){
	int choice;						// choice adalah pilihan
	bool isRun = true;				// parameter untuk menunjukkan bahwa perulangan masih berjalan

	while(isRun){
		cout << "===== Pendataan Mahasiswa =====\n";
		cout << "1. Input Mahasiswa.\n";
		cout << "2. Cari Mahasiswa.\n";
		cout << "3. Tampilkan Mahasiswa.\n";
		cout << "4. Keluar\n";
		cout << "Masukkan pilihan: ";
		cin >> choice;

		switch(choice){
			case 1:{
				inputMhs(cap);
				cap++; 				// i + 1 agar input mahasiswa selanjutnya diisi di indes selanjutnya
				break;}
			case 2:{
				string nama;
				cout << "Masukkan nama yang ingin dicari: "; 
				cin >> nama;
				showMhs(getIdMhsFound(nama));
				break;}
			case 3:
				showAll();
				break;
			case 4:
				isRun = false;
				break;
			default:
				cerr << "Input Tidak Valid!\n";
				break;
		}
	}
	return 0;
}

void inputMhs(int id){
	cout << "\n-----------------------------------------\n";
	cout << "Nama: ";
	cin >> listMhs[id].Nama;
	cout << "NIM: ";
	cin >> listMhs[id].NIM;
	cout << "Semester: ";
	cin >> listMhs[id].semester;
}

void showMhs(int id){
	if(id == -1){
		cout << "Data tidak ditemukan!\n";
		return;
	}
	cout << "\n-----------------------------------------\n";
	cout << "Nama: " << listMhs[id].Nama << endl;
	cout << "NIM: " << listMhs[id].NIM << endl;
	cout << "Semester: " << listMhs[id].semester << endl;
}

int getIdMhsFound(string target){
	for(int i = 0; i < cap+1; i++){
		if(listMhs[i].Nama == target){
			return i;
		}
	}
	return -1;
}

void showAll(){
	for(int i = 0; i < cap; i++){
		cout << "\n-----------------------------------------\n";
		cout << "Nama\n: " << listMhs[i].Nama << endl;
		cout << "NIM\n: " << listMhs[i].NIM << endl;
		cout << "Semester\n: " << listMhs[i].semester << endl;
	}
}