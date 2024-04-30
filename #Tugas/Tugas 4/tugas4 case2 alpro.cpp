#include <iostream>
using namespace std;

int main() {
    int jumlah_deret = 10;
    int total = 0;
    int bilangan = 1;

    cout << "Deret bilangan ganjil: ";
    for (int i = 0; i < jumlah_deret; ++i) {
        cout << bilangan;
        total += bilangan;
        bilangan += 2;
        if (i < jumlah_deret - 1) {
            cout << " + ";
        }
    }

    cout << " = " << total << endl;

    return 0;
}

