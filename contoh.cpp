#include <iostream>
using namespace std;

int main ()
{
	int a = 5;

	int *aPtr = &a;
	
	cout << "Nilai atau Value dari a :" << a << endl;
	cout << "Alamat atau Address dari a :" << &a << endl;
	cout << "Alamat atau Address dari pointer a :" << aPtr << endl;
	
	return 0;		
}


