#include <iostream>
using namespace std;

// prototipe fungsi
void cetakArray(int arr[], int ukuranArray);
void insertionSort(int arr[], int ukuranArray);

// fungsi Utama
int main() {
    int ukuranArray = 14;
    int arr[ukuranArray] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15};

    cout << "Keadaan awal array" << endl;
    cetakArray(arr, ukuranArray);
    cout << endl;

    // memanggil fungsi Insertion Sort
    insertionSort(arr, ukuranArray);

    cout << "\nHasil Akhir Pengurutan: " << endl;
    cetakArray(arr, ukuranArray);
     return 0;
} // akhir int main

void cetakArray(int array[], int ukuranArray){
    for(int i = 0; i < ukuranArray; i++) {
        cout << array[i] << "  ";
    } cout << endl;
}

// Algoritma Pengurutan Insertion Sort
void insertionSort(int arr[], int ukuranArray){
    int j, temp;

    for (int i = 1; i < ukuranArray; i++) {
        temp = arr[i];
        j = i - 1;
        cout << "Perulangan Ke #" << i << endl;
        cetakArray(arr, ukuranArray);
        cout << "Sisipkan " << arr[j+1] << endl;
        while (j >= 0 && arr[j] > temp ) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        cout << "Hasil: " << endl;
        cetakArray(arr, ukuranArray);
        cout << endl;
    }
}
