#include <iostream>
//#include <stdio.h>
using namespace std;
int main() {
	string mata_kuliah, grade;	
	int total_hadir;
	float tugas1, tugas2, tugas3, tugas4, mid, uas, nilai_hadir, nilai_tugas, nilai_mid, nilai_uas, rata_rata;
	cout<<" Masukkan Mata Kuliah : "; cin>>mata_kuliah;
	cout<<" Masukkan Total Kehadiran (0-8) : "; cin>>total_hadir;
	if(total_hadir<0){
		system("cls");
		cout<<" Kehadiran Minimal 0x"<<endl;
		cout<<" Anda Memasukkan "<<total_hadir<<"x";
		cin.get();cin.get();
	}else if(total_hadir>8){
		system("cls");
		cout<<" Kehadiran Maksimal 8x"<<endl;
		cout<<" Anda Memasukkan "<<total_hadir<<"x";
		cin.get();cin.get();
	} else{
		nilai_hadir = (total_hadir/8)*10;
		cout<<" Masukkan Nilai Tugas 1 : "; cin>>tugas1;
		cout<<" Masukkan Nilai Tugas 2 : "; cin>>tugas2;
		cout<<" Masukkan Nilai Tugas 3 : "; cin>>tugas3;
		cout<<" Masukkan Nilai Tugas 4 : "; cin>>tugas4;
		nilai_tugas = ((tugas1+tugas2+tugas3+tugas4)/400)*20;
		cout<<" Masukkan Nilai Mid : "; cin>>mid;
		nilai_mid = (mid/100)*30;
		cout<<" Masukkan Nilai UAS : "; cin>>uas;
		nilai_uas = (uas/100)*40;
		rata_rata = nilai_hadir+nilai_tugas+nilai_mid+nilai_uas;
		if(rata_rata >= 85){
			grade = "A";
		}else if((rata_rata < 85) && (rata_rata >= 80)){
			grade = "A-";
		}else if((rata_rata < 80) && (rata_rata >= 78)){
			grade = "B+";
		}else if((rata_rata < 78) && (rata_rata >= 75)){
			grade = "B";
		}else if((rata_rata < 75) && (rata_rata >= 70)){
			grade = "B-";
		}else if((rata_rata < 70) && (rata_rata >= 67)){
			grade = "C+";
		}else if((rata_rata < 67) && (rata_rata >= 63)){
			grade = "C";
		}else if((rata_rata < 63) && (rata_rata >= 60)){
			grade = "C-";
		}else if((rata_rata < 60) && (rata_rata >= 57)){
			grade = "D";
		}else if(rata_rata < 57){
			grade = "E";
		}
		cout<<endl;
		cout<<" Nilai Mata Kuliah : "<<mata_kuliah<<endl;
		printf(" Rata-Rata Nilai : %.2f\n", rata_rata);
		cout<<" Grade Nilai : "<<grade;
		cin.get();cin.get();
	}
	return 0;
}
