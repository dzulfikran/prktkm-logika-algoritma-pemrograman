#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int pilihan;
	cout<<" Belajar Seleksi Kondisi Switch Case "<<endl;
	cout<<" =================================== "<<endl;
	cout<<" 1. Nama "<<endl;
	cout<<" 2. Nim "<<endl;
	cout<<" =================================== "<<endl;
	cout<<" Masukkan Pilihan : ";cin>>pilihan;
	switch(pilihan){
		case 1 : system("cls");
				cout<<" Nama Saya Muhammad Zulfikran";
				getch();
				break;
		case 2 : system("cls");
				cout<<" Nim Saya 22650173";
				cin.get(); cin.get();
				break;
		default : system("cls");
				cout<<" PILIHAN SALAH!!";
				getch();
	}
	return 0;
}
