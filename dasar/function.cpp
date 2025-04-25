#include <iostream>
using namespace std;

void sayHello(){
	cout << "Hello World\n";
}

int jumlah(int a, int b){
	return a + b;
}

float bagi(float a, float b){
	return a / b;
}

double luasLingkarang(double r){
	return (22 * r * r) / 7;
}

int main(){
	void sayHello();
	cout << jumlah(2, 3);
	cout << bagi(10, 2);
	cout << "luas Lingkarang : " << luasLingkarang(7) << endl;
	return 0;
}

/* syntax: type_data nama_function(parameter){
		blok_kode ......
	}
*/