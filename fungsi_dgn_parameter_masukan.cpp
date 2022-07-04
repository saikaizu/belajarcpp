#include <iostream>

using namespace std;

void HitungLuas(float pj, float lb);
main()

{
	
float panjang, lebar;
cout << "panjang = "; cin >> panjang;
cout << "lebar = "; cin >> lebar;
HitungLuas(panjang, lebar);

}

void HitungLuas(float pj, float lb)

{
	
float Luas;
Luas = pj * lb;
cout << "Luas = "<< Luas;

}

