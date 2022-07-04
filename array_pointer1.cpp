#include <iostream>
using namespace std;

const int array = 11;

int main()
{
    int A[11]={12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19}, i, max_num;
    const int *pInt=A;
    
    for (i=0;i<11;i++){
       cout <<"Cetak Nilai ke-"<<i+1<<" = "<<A[i]<<endl;
    }
    
    for(i = 0; i < 11; i++){
    if(A[i] > max_num){
      max_num = A[i];
    }
}
    
    
    cout  << "Angka terbesar adalah: " << max_num;
    cout << endl;
     
        for (i=0;i<11;i++){
        cout <<"Cetak Nilai Pointer ke-"<<i+1<<" = "<<*(pInt)<<endl;
    }
    return 0;

}
