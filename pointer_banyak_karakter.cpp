#include<iostream>
#include<stdio.h>
using namespace std;

int H(const char*s){

int x = 0;
for (;*s!='\0';s++)
++x;
return x;
}
main (void){
cout<<endl;
cout<<"  Nama        : Sai Pratama Putra "<<endl;
cout<<"  NIM         : 211011400994 "<<endl;
cout<<"  Kelas       : 02TPLM005 "<<endl;
cout<<"  Mata Kuliah : Algoritma & Pemrograman II"<<endl;
cout<<endl;
char String [80];
cout<<"  Inputlah Sebuah Kata      : ";
cin.getline(String,100);cout<<endl;
cout<<"  Jumlah Karakternya Adalah : "<<H(String)<<" Huruf "<<endl;
}