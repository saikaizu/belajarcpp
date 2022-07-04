#include <iostream>
using namespace std;

int main()
{
    int var = 2;
    int *pVar = &var;

    cout<<pVar<<endl;
    pVar++;
    cout<<pVar<<endl;

    return 0;
}
