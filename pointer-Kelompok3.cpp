#include <iostream>
using namespace std;

int main (){

	cout << "KELOMPOK 3 - POINTER" << endl;
	cout << "Kelas 02TPLM005" << endl;
	
	int a;

	int *aPtr = &a;
	
	cout << "Nilai atau Value dari a :";
	cin >> a;
	
	cout << "Alamat atau Address dari a :" << &a << endl;
	cout << "Alamat atau Address dari pointer a :" << aPtr << endl;
	
	return 0;
	
	
	
}
