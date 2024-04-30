#include <iostream>
using namespace std;

int main() {
    
    int jumlah_deret = 10;
    int total = 0;

    
    for (int i = 1; i <= jumlah_deret; ++i) {
        int bilangan_genap = 2 * i;
        total += bilangan_genap;
        
        if (i < jumlah_deret) {
            cout << bilangan_genap << " + ";
        } else {
            cout << bilangan_genap << " = " << total << endl;
        }
    }

    return 0;
}

