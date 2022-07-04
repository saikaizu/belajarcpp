#include<cstdlib>
#include<iostream>
#include<iomanip>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <conio.h>
using namespace std;
main(){
int i;
float sks,angka,jml_sks,n_angka,sks_na,ip,sks_na_plus;  
char x,matkul[20],nilai,nama[20],nim[10],jurusan[20];
cout<<"            Program Penghitungan IPK\n";
cout<<"              UNIVERSITAS PAMULANG\n";
cout<<"--------------------------------------------------------------------------------\n";
cout << "NIM    : 181011402082\n";
cout << "Nama    : Zaim Alkholis\n";
cout << "Kelas    : 02TPLM001 / REVISI\n";
cout << "Jurusan    : Teknik Informatika\n \n";
cout<<"--------------------------------------------------------------------------------\n";

i=0;
jml_sks=0;

x='y';
while (x=='y')
{
i=i+1;

cout<<i;
cout<<" .Mata Kuliah\t: ";cin>>matkul;
cout<<"   SKS\t\t: ";cin>>sks;
cout<<"   Nilai\t: ";cin>>nilai;
cout<<"   Tambah?\t: ";cin>>x;
cout<<"\n";

switch(nilai)
{
case 'A':n_angka=4;break;
case 'B':n_angka=3;break;
case 'C':n_angka=2;break;
case 'D':n_angka=1;break;
}
jml_sks=jml_sks+sks;
sks_na=sks*n_angka;
sks_na_plus=sks_na_plus+sks_na;
}
ip=sks_na_plus/jml_sks;
cout<<"==============================================+===================================\n";
cout<<"   Jumlah SKS\t\t: ";cout<<jml_sks;
cout<<"\n   Jumlah SKS x Nilai\t: ";cout<<sks_na_plus;
cout<<"\n   Indeks Prestasi\t: ";cout<<ip;
cout<<"\n--------------------------------------------------------------------------------\n";
cout<<"\n   Predikat Indeks Prestasi : ";
if(ip>=0 && ip<=1.5)
cout<<"KURANG MEMUASKAN";
else if(ip>=1.5 && ip<=2.75)
cout<<"CUKUP";
else if(ip>=2.75 && ip<=3.5)
cout<<"MEMUASKAN";
else if(ip>=3.5 && ip<=4)
cout<<"CUMLAUDE";
cout<<endl;
getch();
    system("PAUSE");
    return EXIT_SUCCESS;
}
