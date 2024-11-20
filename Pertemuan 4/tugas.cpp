#include <iostream>
using namespace std;
int main() {
	int x = 0, password;
	string username = "malika", log_in_username;
	
	do {
		system("cls");
		cout<<" Masukkan Username : "; cin>>log_in_username;
		cout<<" Masukkan Password : "; cin>>password;
		if(log_in_username == username and (password >= 22650001 and password <= 22650187)) {
			system("cls");
			cout<<"Login Berhasil\n\n";
			cout<<"Selamat Datang Mahasiswa\n";
			cout<<"Dengan Nim : "<<password<<"\n";
			if(password >= 22650001 and password <= 22650037) {
				cout<<"Dari Kelas : A\n";
			}else if(password >= 22650038 and password <= 22650072) {
				cout<<"Dari Kelas : B\n";
			}else if(password >= 22650073 and password <= 22650105) {
				cout<<"Dari Kelas : C\n";
			}else if(password >= 22650106 and password <= 22650150) {
				cout<<"Dari Kelas : D\n";
			}else if(password >= 22650151 and password <= 22650187) {
				cout<<"Dari Kelas : E\n";
			}
			cin.get(); cin.get();
			while(true) {
				system("cls");
				int pilihan;
				cout<<"      Bentuk Bangun Ruang      \n";
				cout<<"===============================\n";
				cout<<"1. Belah Ketupat\n";
				cout<<"2. Segitiga Pascal\n";
				cout<<"3. Segitiga Siku-Siku\n";
				cout<<"4. Keluar\n";
				cout<<"===============================\n";
				cout<<"Masukkan Pilihan : ";cin>>pilihan;
				if(pilihan == 1) {
					system("cls");
					cout<<"Belah Ketupat\n";
					cout<<"=============\n";
					for(int i = 1; i <= 5; i++) {
						for(int j = i; j < 5; j++) {
							cout<<" ";
						}
						for(int k = 1; k <= i; k++) {
							cout<<"*";
						}
						for(int l = 1; l < i; l++) {
							cout<<"*";
						}
						cout<<endl;
					}
					for(int i = 1; i <= 4; i++) {
						for(int j = 1; j <= i; j++) {
							cout<<" ";
						}
						for(int k = i; k <= 4; k++) {
							cout<<"*";
						}
						for(int l = i; l < 4; l++) {
							cout<<"*";
						}
						cout<<endl;
					}
					cin.get(); cin.get();
				}else if(pilihan == 2) {
					system("cls");
					cout<<"Segitiga Pascal\n";
					cout<<"===============\n";
					for(int i = 1; i <= 6; i++) {
						for(int j = i; j <= 6; j++) {
							cout<<" ";
						}
						for(int k = 1; k <= i; k++) {
							cout<<"*";
						}
						for(int l = 1; l < i; l++) {
							cout<<"*";
						}
						cout<<endl;
					}
					cin.get(); cin.get();
				}else if(pilihan == 3) {
					system("cls");
					cout<<"Segitiga Siku-Siku\n";
					cout<<"==================\n";
					for(int i = 1; i <= 2; i++) {
						for(int j = 1; j <= i; j++) {
							cout<<"* ";
						}
						cout<<endl;
					}
					for(int i = 1; i <= 1; i++) {
						for(int j = 1; j <= 2; j++) {
							cout<<"*   ";
						}
						cout<<endl;
					}
					for(int i = 1; i <= 1; i++) {
						for(int j = 1; j <= 2; j++) {
							cout<<"*     ";
						}
						cout<<endl;
					}
					for(int i = 1; i <= 1; i++) {
						for(int j = 1; j <= 5; j++) {
							cout<<"* ";
						}
						cout<<endl;
					}
					cin.get(); cin.get();
				}else if(pilihan == 4) {
					system("cls");
					x = 0;
					break;
				}else {
					system("cls");
					cout<<"PILIHAN SALAH";
					cin.get(); cin.get();
				}
			}
		}else if(log_in_username == username and !(password >= 22650001 and password <= 22650187)) {
			system("cls");
			cout<<"PASSWORD SALAH";
			x++;
			cin.get(); cin.get();
		}if(log_in_username != username and (password >= 22650001 and password <= 22650187)) {
			system("cls");
			cout<<"USERNAME SALAH";
			x++;
			cin.get(); cin.get();
		}else if(log_in_username != username and !(password >= 22650001 and password <= 22650187)) {
			system("cls");
			cout<<"USERNAME DAN PASSWORD SALAH";
			x++;
			cin.get(); cin.get();
		}
	} while(x < 3);
	
	if(x == 3) {
		system("cls");
		cout<<"ANDA TELAH MEMASUKKAN USERNAME ATAU PASSWORD YANG SALAH SEBANYAK 3X";
		cin.get(); cin.get();
	}
	return 0;
}

