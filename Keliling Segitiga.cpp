#include <iostream>

using namespace std;

int main(){

  int a,b,c;
  float keliling;

  cout << "Masukkan panjang sisi a: ";
  cin >> a;
  cout << "Masukkan panjang sisi b: ";
  cin >> b;
  cout << "Masukkan panjang sisi c: ";
  cin >> c;

  keliling = a+b+c;
  cout << "Keliling segitiga adalah " << keliling << endl;

  return 0;
}
