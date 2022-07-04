#include <iostream>

using namespace std;

void HitungLuas(float *Luas);
main()

{
	
float Luas;
HitungLuas(&Luas);
cout << "Luas = "<< Luas;

}

void HitungLuas(float *Luas)

{
	
float panjang, lebar;
cout << "panjang = "; cin >> panjang;
cout << "lebar = "; cin >> lebar;
*Luas = panjang * lebar;

}

