#include <iostream>

using namespace std;

int main() {
	bool hasil;
	
	hasil = (10 < 1 and 10 > 1);
	cout<<"Perbandingan 10 < 1 AND 10 >  1 = "<<hasil<<endl;
	hasil = (10 > 1 and 10 != 1);
	cout<<"Perbandingan 10 > 1 AND 10 != 1 = "<<hasil<<endl;
	
	hasil = (10 < 1 or 10 > 1);
	cout<<"Perbandingan 10 < 1 OR  10 >  1 = "<<hasil<<endl;
	hasil = (10 > 1 and 10 != 1);
	cout<<"Perbandingan 10 > 1 OR  10 != 1 = "<<hasil<<endl;
	hasil = (10 < 1 and 10 == 1);
	cout<<"Perbandingan 10 < 1 OR  10 == 1 = "<<hasil<<endl;
	
	hasil = (not 1 == 1);
	cout<<"Perbandingan 1 == 1 = "<<hasil<<endl;
	hasil = (not 1 < 1);
	cout<<"Perbandingan 1 <  1 = "<<hasil<<endl;
	
	return 0;
}
