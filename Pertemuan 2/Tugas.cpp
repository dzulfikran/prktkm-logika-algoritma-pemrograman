#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	float a, b, c, d, total, rata2;
	string nama;
	cout<<"Masukkan Nama : "; cin>>nama;
	cout<<"Masukkan Nilai Pertama : "; cin>>a;
	cout<<"Masukkan Nilai Kedua   : "; cin>>b;
	cout<<"Masukkan Nilai Ketiga  : "; cin>>c;
	cout<<"Masukkan Nilai Keempat : "; cin>>d;
	cout<<endl;
	cout<<"Data Nilai "<<nama<<endl;
	total = a + b + c + d;
	cout<<"Jumlah Keseluruhan : "<<total<<endl;
	rata2 = total / 4;
	printf("Rata-Rata Nilai    : %.2f", rata2);
	
	return 0;
}
