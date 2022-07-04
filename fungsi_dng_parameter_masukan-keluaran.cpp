#include <iostream>

using namespace std;

void Tukar (int *x, int *y);
main()

{
	
int x,y;
cout << "x = "; cin >> x;
cout << "y = "; cin >> y;
Tukar(&x,&y);
cout << "x = " << x << endl;
cout << "y = " << y;

}

void Tukar (int *x, int *y)

{

int temp;
temp = *x; *x = *y; *y = temp;

}
