#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char str[100] = "Lab SAQ";
	char cpStr[100], upStr[100], lowStr[100], revStr[100], catStr[100];

	// strcpy = singkatan dari 'string copy', mengcopy string dari sumber ke tujuan
	// syntax: strcpy(destination, source)
	// destination adalah tempat dimana hasil salinan disimpan
	// source adalah sumber string yang akan di salin
	cout << "-------------------------- strcpy --------------------------\n"; // 
	strcpy(cpStr, str);
	cout << "str\t\t\t\t: " << str << endl;
	cout << "cpStr\t\t\t\t: " << cpStr << endl;

	// strlen = singkatan dari 'string length', mengembalikan panjang karakter dari sebuah string
	cout << "-------------------------- strlen --------------------------\n";
	cout << "str\t\t\t\t: " << str << endl;
	cout << "Panjang karakter str\t\t: " << strlen(str) << endl;

	// strupr = singkatan dari 'string upper case', merubah semua huruf menjadi huruf besar
	cout << "-------------------------- strupr --------------------------\n";
	strcpy(upStr, str);
	cout << "str\t\t\t\t: " << str << endl;
	cout << "str huruf besar\t\t\t: " << strupr(upStr) << endl;

	// strlwr = singkatan dari 'string lower case', merubah semua huruf menjadi huruf kecil
	cout << "-------------------------- strlwr --------------------------\n";
	strcpy(lowStr, str);
	cout << "str\t\t\t\t: " << str << endl;
	cout << "str huruf kecil\t\t\t: " << strlwr(lowStr) << endl;

	// strrev = singkatan dari 'string reverse', membalikkan string
	cout << "-------------------------- strrev --------------------------\n";
	strcpy(revStr, str);
	cout << "str\t\t\t\t: " << str << endl;
	cout << "str dibalik\t\t\t: " << strrev(revStr) << endl;

	// strcat = singkatan dari 'string concatenate', menggabungkan dua string
	// syntax: strcpy(destination, source)
	cout << "-------------------------- strcat --------------------------\n";
	strcpy(catStr, revStr);
	cout << catStr << " + " << str << " \t\t: " << strcat(catStr, str) << endl;

	// strcmp = singkatan dari 'string compare', membandingkan dua string berdasarkan kode ascii
	// syntax: strcmp(string 1, string 2)
	cout << "-------------------------- strcmp --------------------------\n";
	cout << "perbandingan str dan upStr\t: " << strcmp(str, upStr) << endl;

	// strstr = singkatan dari 'string search', mencari string dalam string lain
	// syntax: strstr(string 1, substring 1);
	// string 1 adalah sumber string yang dicari
	// substring 1 adalah string yang akan dicari di dalam sumber
	cout << "-------------------------- strstr --------------------------\n";
	if(strstr(str, "SAQ")){
		cout << "Text SAQ ditemukan di dalam teks " << str << endl;
	}else{
		cout << "Text \" SAQ \" tidak ditemukan di dalam teks " << str << endl;
	}

	return 0;
}