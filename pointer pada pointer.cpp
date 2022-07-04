#include<iostream>

using namespace std;

int main()
{
int *pB;
int **pA;
int nilaiX=100;
pB=&nilaiX;
pA=&pB;
cout<<"Isi nilaiX via pB = "<<*pB<<endl;
cout<<"Isi nilaiX via pA = "<<**pA<<endl;
}
