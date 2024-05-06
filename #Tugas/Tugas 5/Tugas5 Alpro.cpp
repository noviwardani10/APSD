#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Pindahkan elemen dari arr[0..i-1] yang lebih besar dari key
           ke satu posisi di depan posisi mereka saat ini */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int length;
    cout << "Masukkan panjang array: ";
    cin >> length;

    int arr[length];
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, length);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

