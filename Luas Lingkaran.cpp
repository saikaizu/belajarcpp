#include <iostream>
using namespace std;
int main()
{
  float l, r;
  const float phi = 3.14;
  cout << "===============================================\n";
  cout << "Program Menghitung Luas Lingkaran - Sai Pratama\n";
  cout << "===============================================\n";
  cout << "Masukkan panjang jari-jari lingkaran: ";
  cin >> r;
  l = phi*r*r;
  cout << "Luas Lingkaran adalah "<< l << endl;
  return 0;
}
