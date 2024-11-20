#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y) {
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

string username, password;

void login() {
	gotoxy(20,5);cout<<"LOGIN";
	gotoxy(15,7);cout<<"Username : "<<endl;
	gotoxy(15,8);cout<<"Password : ";
	gotoxy(26,7);getline(cin, username);
	gotoxy(26,8);getline(cin, password);
}

int banyak_mhs = 0, banyak_matkul = 0;
#define max 200
string nama[max];
string nim[max];
string kelas[max];
string matkul[max];
float nilai[max][max];

void input() {
	do{
		int pilihan;
		system("cls");
		cout<<"Halaman Tambah Data\n";
		cout<<"==============================\n";
		cout<<"1. Tambah Data Mahasiswa\n";
		cout<<"2. Tambah Data Mata Kuliah\n";
		cout<<"3. Tambah Data Nilai Mahasiswa\n";
		cout<<"4. Kembali Ke Menu Utama\n";
		cout<<"==============================\n";
		cout<<"Masukkan Pilihan : "; cin>>pilihan;
		if (pilihan == 1) {
			system("cls");
			int n;
			cout<<"Masukan Banyaknya Data Yang Ingin Diinput : "; cin>>n;
			for(int i = 0; i < n; i++) {
				cin.ignore();
				system("cls");
				banyak_mhs += 1;
				cout<<"Data Ke - "<<banyak_mhs<<"\n\n";
				cout<<"Masukkan Nama  : \n";
				cout<<"Masukkan Nim   : \n";
				cout<<"Masukkan Kelas : \n";
				gotoxy(17,2); getline(cin, nama[banyak_mhs - 1]);
				gotoxy(17,3); getline(cin, nim[banyak_mhs - 1]);
				gotoxy(17,4); getline(cin, kelas[banyak_mhs - 1]);
				system("cls");
				for(int j = 0; j < banyak_mhs; j++) {
					if(nim[j-1] == nim[banyak_mhs-1]) {
						cout<<"Data Nim "<<nim[banyak_mhs-1]<<" Sudah Ada";
						banyak_mhs -= 1;
						cin.get();
						break;
					} else if (j == banyak_mhs - 1) {
						cout<<"Data Nim "<<nim[banyak_mhs - 1]<<" Berhasil Diinput";
						cin.get();
					}
				}	
			}
		}else if (pilihan == 2) {
			system("cls");
			int n;
			cout<<"Masukkan Jumlah Matkul : "; cin>>n;
			for(int i = 0; i < n; i++) {
				banyak_matkul += 1;
				cout<<"Masukkan Mata Kuliah Ke "<<banyak_matkul<<" : ";
				cin>>matkul[banyak_matkul - 1];
			}
		}else if (pilihan == 3) {
			system("cls");
			int n;
			cout<<"\tData Mahasiswa\n";
			cout<<"\t==============\n";
			for(int i = 0; i < banyak_mhs; i++) {
				cout<<i+1<<". "<<nama[i]<<endl;
			}
			cout<<"Masukkan Pilihan : "; cin>>pilihan;
			n = pilihan - 1;
			system("cls");
			cout<<"Input Nilai "<<nama[n]<<endl;
			for(int i = 0; i < banyak_matkul; i++) {
				cout<<"Masukkan Nilai "<<matkul[i]<<" = ";
				cin>>nilai[n][i];
			}
		}else if (pilihan == 4) {
			break;
		}
	}while (true);	
}

void lihat() {
	do{
		int pilihan;
		system("cls");
		cout<<"Halaman Semua Data\n";
		cout<<"=====================================\n";
		cout<<"1. Data Mahasiswa dan Nilai Mahasiswa\n";
		cout<<"2. Data Mata Kuliah\n";
		cout<<"3. Kembali Ke Menu Utama\n";
		cout<<"=====================================\n";
		cout<<"Masukkan Pilihan : "; cin>>pilihan;
		if (pilihan == 1) {	
			system("cls");
			if (banyak_mhs > 0 and banyak_matkul > 0) {
				cout<<"\tData Mahasiswa\n";
				cout<<"\t==============\n";
				for(int i = 0; i < banyak_mhs; i++) {
					cout<<i+1<<". "<<nama[i]<<endl;
				}
				cout<<"Masukkan Pilihan : "; cin>>pilihan;
				int n = pilihan - 1;
				float total = 0, rata_rata;
				system("cls");
				cout<<"Data Mahasiswa\n";
				cout<<"+===========================+=============+=======+\n";
				cout<<"|       Nama Mahasiswa      |     Nim     | Kelas |\n";
				cout<<"+===========================+=============+=======+\n";
				cout<<"|  "<<nama[n];
				gotoxy(28,4); cout<<"|  "<<nim[n];
				gotoxy(42,4); cout<<"|   "<<kelas[n];
				gotoxy(50,4); cout<<"|\n";
				cout<<"+===========================+=============+=======+\n";
				cout<<endl;
				cout<<"Data Mata Kuliah\n";
				cout<<"+====+=====================+=========+\n";
				cout<<"| NO |     Mata Kuliah     |  Nilai  |\n";
				cout<<"+====+=====================+=========+\n";
				int i = 0;
				for(i; i < banyak_matkul; i++) {
					cout<<"|  "<<i+1;
					gotoxy(5,i+11); cout<<"|  "<<matkul[i];
					gotoxy(27,i+11); cout<<"|   "<<nilai[n][i];
					gotoxy(37,i+11); cout<<"|\n";
					total += nilai[n][i];
				}
				rata_rata = total / banyak_matkul;
				cout<<"+----+---------------------+---------+\n";
				cout<<"|    Jumlah";
				gotoxy(27,i+12); cout<<"|   "<<total;
				gotoxy(37,i+12); cout<<"|\n";
				cout<<"+--------------------------+---------+\n";
				cout<<"|    Rata-Rata";
				gotoxy(27,i+14); cout<<"|   "; printf("%.2f",rata_rata);
				gotoxy(37,i+14); cout<<"|\n";
				cout<<"+==========================+=========+\n";
				cin.get();cin.get();
			}else if (banyak_matkul > 0 and banyak_mhs == 0) {
				cout<<"Data Mahasiswa Masih Kosong";
				cin.get(); cin.get();
			}else if (banyak_matkul == 0 and banyak_mhs > 0) {
				cout<<"Data Mata Kuliah Masih Kosong";
				cin.get(); cin.get();
			}else {
				cout<<"Data Mahasiswa Dan Mata Kuliah Masih Kosong";
				cin.get(); cin.get();
			}
		}else if (pilihan == 2) {
			system("cls");
			if(banyak_matkul > 0) {
				cout<<"\tData Mata Kuliah\n";
				cout<<"\t================\n";
				for(int i = 0; i < banyak_matkul; i++) {
					cout<<i+1<<". "<<matkul[i]<<endl;
				}
				cin.get(); cin.get();
			} else {
				cout<<"Data Mata Kuliah Masih Kosong";
				cin.get(); cin.get();
			}
		}else if (pilihan == 3) {
			break;
		}
	}while (true);
}

void edit() {
	do{
		int pilihan;
		system("cls");
		cout<<"Halaman Edit Data\n";
		cout<<"==============================\n";
		cout<<"1. Edit Identitas Mahasiswa\n";
		cout<<"2. Edit Mata Kuliah\n";
		cout<<"3. Edit Nilai Mahasiswa\n";
		cout<<"4. Kembali Ke Menu Utama\n";
		cout<<"==============================\n";
		cout<<"Masukkan Pilihan : "; cin>>pilihan;
		if (pilihan == 1) {
			system("cls");
			if(banyak_mhs > 0) {
				cout<<"\tData Mahasiswa\n";
				cout<<"\t==============\n";
				for(int i = 0; i < banyak_mhs; i++) {
					cout<<" "<<i+1<<". "<<nama[i]<<endl;
				}
				cout<<"Masukkan Pilihan : "; cin>>pilihan;
				system("cls");
				int n = pilihan - 1;
				cout<<"Data Sebelumnya\n";
				cout<<"+===========================+=============+=======+\n";
				cout<<"|       Nama Mahasiswa      |     Nim     | Kelas |\n";
				cout<<"+===========================+=============+=======+\n";
				cout<<"|  "<<nama[n];
				gotoxy(28,4); cout<<"|  "<<nim[n];
				gotoxy(42,4); cout<<"|   "<<kelas[n];
				gotoxy(50,4); cout<<"|\n";
				cout<<"+===========================+=============+=======+\n";
				cout<<" Masukkan Data Baru\n";
				cin.ignore();
				cout<<" Masukkan Nama  : "; getline(cin, nama[n]);
				cout<<" Masukkan Nim   : "; getline(cin, nim[n]);
				cout<<" Masukkan Kelas : "; getline(cin, kelas[n]);
				cin.get(); cin.get();
			} else {
				cout<<"Data Mahasiswa Masih Kosong";
				cin.get(); cin.get();
			}
		}else if (pilihan == 2) {
			system("cls");
			if(banyak_matkul > 0) {
				cout<<" Data Mata Kuliah\n";
				cout<<" ================\n";
				for(int i = 0; i < banyak_matkul; i++) {
					cout<<i+1<<". "<<matkul[i]<<endl;
				}
				cout<<" Masukkan Pilihan Yang Akan Di Edit : "; cin>>pilihan;
				int n = pilihan - 1;
				cout<<endl<<endl;
				cout<<"Masukkan Mata Kuliah : "; cin>>matkul[n];
			} else {
				cout<<"Data Mata Kuliah Masih Kosong";
				cin.get(); cin.get();
			}
		}else if (pilihan == 3) {
			system("cls");
			if(banyak_mhs > 0 and banyak_matkul > 0) {
				cout<<" Data Mahasiswa\n";
				cout<<" ==============\n";
				for(int i = 0; i < banyak_mhs; i++) {
					cout<<i+1<<". "<<nama[i]<<endl;
				}
				cout<<" Masukkan Pilihan : "; cin>>pilihan;
				system("cls");
				int n = pilihan - 1;
				cout<<"Data Sebelumnya\n";
				cout<<"+====+=====================+=========+\n";
				cout<<"| NO |     Mata Kuliah     |  Nilai  |\n";
				cout<<"+====+=====================+=========+\n";
				for(int i = 0; i < banyak_matkul; i++) {
					cout<<"|  "<<i+1;
					gotoxy(5,i+4); cout<<"|  "<<matkul[i];
					gotoxy(27,i+4); cout<<"|   "<<nilai[n][i];
					gotoxy(37,i+4); cout<<"|\n";
				}
				cout<<"+====+=====================+=========+\n";
				cout<<endl;
				for(int i = 0; i < banyak_matkul; i++){
					cout<<" Masukkan Nilai "<<matkul[i]<<" : ";
					cin>>nilai[n][i];
				}
				cin.get(); cin.get();
			}else if (banyak_matkul > 0 and banyak_mhs == 0) {
				cout<<"Data Mahasiswa Masih Kosong";
				cin.get(); cin.get();
			}else if (banyak_matkul == 0 and banyak_mhs > 0) {
				cout<<"Data Mata Kuliah Masih Kosong";
				cin.get(); cin.get();
			}else {
				cout<<"Data Mahasiswa Dan Mata Kuliah Masih Kosong";
				cin.get(); cin.get();
			}
		}else if (pilihan == 4) {
			break;
		}
	}while (true);
}

void hapus() {
	do{
		int pilihan;
		system("cls");
		cout<<"Halaman Hapus Data\n";
		cout<<"========================\n";
		cout<<"1. Hapus Data Mahasiswa\n";
		cout<<"2. Hapus Mata Kuliah\n";
		cout<<"3. Kembali Ke Menu Utama\n";
		cout<<"========================\n";
		cout<<"Masukkan Pilihan : "; cin>>pilihan;
		if (pilihan == 1) {
			system("cls");
			if(banyak_mhs > 0) {
				cout<<" Data Mahasiswa\n";
				cout<<" ==============\n";
				for(int i = 0; i < banyak_mhs; i++) {
					cout<<i+1<<". "<<nama[i]<<endl;
				}
				int n;
				cout<<" Masukkan Pilihan : "; cin>>n;
				for(int i = n; i < banyak_mhs; i++) {
					nama[i-1] = nama[i];
					nim[i-1] = nim[i];
					kelas[i-1] = kelas[i];
				}
				for(int j = n; j < banyak_mhs; j++) {
					for(int k = 0; k < banyak_matkul; k++) {
						nilai[j-1][k] = nilai[j][k];	
					}	
				}
				for(int i = 0; i < banyak_matkul; i++) {
					nilai[banyak_mhs-1][i] = 0;
				}
				banyak_mhs -= 1;
				system("cls");
				cout<<" Data Mahasiswa Berhasil Dihapus";
				cin.get(); cin.get();
			} else {
				cout<<"Data Mahasiswa Masih Kosong";
				cin.get(); cin.get();
			}				
		}else if (pilihan == 2) {
			system("cls");
			if(banyak_matkul > 0) {
				cout<<" Data Mata Kuliah\n";
				cout<<" ================\n";
				for(int i = 0; i < banyak_matkul; i++) {
					cout<<i+1<<". "<<matkul[i]<<endl;
				}
				int n;
				cout<<" Masukkan Pilihan : "; cin>>n;
				for(int i = n; i < banyak_matkul; i++) {
					matkul[i-1] = matkul[i];
				}
				for(int j = 0; j < banyak_mhs; j++) {
					for(int k = n; k < banyak_matkul; k++) {
						nilai[j][k-1] = nilai[j][k];
					}
				}
				for(int i = 0; i < banyak_mhs; i++) {
					nilai[i][banyak_matkul-1] = 0;
				}
				banyak_matkul -= 1;
				system("cls");
				cout<<" Data Mata Kuliah Berhasil Dihapus";
				cin.get(); cin.get();
			} else {
				cout<<"Data Mata Kuliah Masih Kosong";
				cin.get(); cin.get();
			}
		}else if (pilihan == 3) {
			break;
		}
	}while (true);
}

void utama() {
	do {
		system("cls");
		int pilihan;
		cout<<"Menu Data Mahasiswa\n";
		cout<<"===================\n";
		cout<<"1. Input Data\n";
		cout<<"2. Lihat Data\n";
		cout<<"3. Edit Data\n";
		cout<<"4. Hapus Data\n";
		cout<<"5. Keluar\n";
		cout<<"===================\n\n";
		cout<<"Masukkan Pilihan : "; cin>>pilihan;
		if(pilihan == 1) {
			input();
		}else if(pilihan == 2) {
			lihat();
		}else if(pilihan == 3) {
			edit();
		}else if(pilihan == 4) {
			hapus();
		}else if(pilihan == 5) {
			break;
		}
	}while (true);
}

int main() {
	int batas_login = 0;
	do {
		system("cls");
		login();
		if(username == "logika" and password == "algoritma") {
			system("cls");
			cout<<"Login Berhasil";
			batas_login = 0;
			cin.get();cin.get();
			utama();
		}else if(username != "logika" and password == "algoritma") {
			system("cls");
			cout<<"Username Salah";
			batas_login++;
			cin.get();cin.get();
		}else if(username == "logika" and password != "algoritma") {
			system("cls");
			cout<<"Password Salah";
			batas_login++;
			cin.get();cin.get();
		}else {
			system("cls");
			cout<<"Username dan Password Salah";
			batas_login++;
			cin.get();cin.get();
		}
	}while(batas_login < 3);
	
	if(batas_login == 3) {
		system("cls");
		cout<<"Anda Melebihi Batas Login (3X)";
		cin.get();cin.get();
	}
	
	return 0;
}
