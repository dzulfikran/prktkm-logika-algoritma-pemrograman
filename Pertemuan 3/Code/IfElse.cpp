#include <iostream>
using namespace std;
int main(){
	int pilihan;
	cout<<" Belajar Seleksi Kondisi if else "<<endl;
	cout<<" =============================== "<<endl;
	cout<<" 1. Nama "<<endl;
	cout<<" 2. Nim "<<endl;
	cout<<" =============================== "<<endl;
	cout<<" Masukkan Pilihan : ";cin>>pilihan;
	if(pilihan == 1){
		system("cls");
		cout<<" Nama Saya Adalah Muhammad Zulfikran";
		cin.get();
		cin.get();
	}else if(pilihan == 2){
		system("cls");
		cout<<" Nim Saya Adalah 22650173";
		cin.get();
		cin.get();
	}else{
		system("cls");
		cout<<" PILIHAN SALAH!!";
		cin.get();
		cin.get();
	}
	return 0;
}
