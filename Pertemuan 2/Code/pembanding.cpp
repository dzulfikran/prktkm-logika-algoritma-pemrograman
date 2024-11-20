#include <iostream>

using namespace std;

int main() {
	int nilai1 = 1, nilai2 = 2;
	bool hasil;
	hasil = nilai1 < nilai2;
	cout<<"Hasil "<<nilai1<<" <  "<<nilai2<<" = "<<hasil<<endl;
	hasil = nilai1 > nilai2;
	cout<<"Hasil "<<nilai1<<" >  "<<nilai2<<" = "<<hasil<<endl;
	hasil = nilai1 <= nilai2;
	cout<<"Hasil "<<nilai1<<" <= "<<nilai2<<" = "<<hasil<<endl;
	hasil = nilai1 >= nilai2;
	cout<<"Hasil "<<nilai1<<" >= "<<nilai2<<" = "<<hasil<<endl;
	hasil = nilai1 == nilai2;
	cout<<"Hasil "<<nilai1<<" == "<<nilai2<<" = "<<hasil<<endl;
	hasil = nilai1 != nilai2;
	cout<<"Hasil "<<nilai1<<" != "<<nilai2<<" = "<<hasil<<endl;
	
	return 0;
}
