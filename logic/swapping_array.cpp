#include <iostream>
using namespace std;

/*

logika swap / menukar elemen array
kegunaan:
- metode sorting
- metode serching
byk digunakan di struktur data seperti vector, graph, queue, tree, hashmap

pembahasan:
! diberikans sebuah array :
int arr[5] = {1, 2, 3, 4, 5};

? bagaimana cara menukar array pada index 1 dengan index 2
= hasil yang diharapkan adalah int arr[5] = {1, 3, 2, 4, 5} ;

caranya dengan membuat satu variabel temporary(sementara) untuk wadah.
nb : pahami, pikirkan dengan menvisualisasikan seolah kamu ingin
membawa 2 barang namun kamu ingin menukar salah satu barang tsb ke sisi tangan sebaliknya.
tangan kiri = barang 1
tangan kanan = barang 2
meja = kosong
		|
		|
		V
tangan kiri = barang 1
tangan kanan = barang 2 (diletak ke meja)
meja = barang 2 (awalnya kosong sekarang diisi barang 2)
		|
		|
		V
tangan kiri = barang 1 (barang 1 di pindah ke tangan kanan)
tangan kanan = barang 1 (yang awal nya barang 2 menjadi barang 1)
meja = barang 2
		|
		|
		V
tangan kiri = barang 2 (yang awal nya barang 1 menjadi barang 2)
tangan kanan = barang 1
meja = barang 2

jadi kesimpulannya cara kerja temp ini salin timpa nilai dengan 
saling mengisi ke arah berlawanan dengan bantuan variable sementara, bukan murni pindah nilai

implemetasi ke kode:
*/

int main() {
	int arr[5] = {1, 2, 3, 4, 5} ;
	cout << "Sebelum di swap: " ;
	for(int i = 0; i < 5; i++) {
		cout << arr[i] << ", " ;
	}
	int temp;
	temp = arr[2] ;
	arr[2] = arr[1] ;
	arr[1] = temp;
	cout << "\n\nSesudah di swap: " ;
	for(int i = 0; i < 5; i++) {
		cout << arr[i] << ", " ;
	}
}