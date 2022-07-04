#include <iostream> 
#include <conio.h> 
#define MAX 5 

using namespace std;
int main(void) 

{ 
char nama[] = "Albert Einstein"; 
char *pNama = nama; 

cout << "Nama = " << nama << endl; 
cout << "pNama = " << pNama << endl; pNama += 7; 

//Pointer menunjuk pada Index ke-7
cout << "\nSetelah pNama += 7" << endl; 
cout << "Nama = " << nama << endl; 
cout << "pNama = " << pNama << endl; 

getch(); 
}

