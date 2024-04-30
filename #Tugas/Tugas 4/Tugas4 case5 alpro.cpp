#include <iostream>
using namespace std;

int perkalian_deret_genap(int n) {
    int total = 0;
    for (int i = n; i >= 2; i -= 2) {
        int temp = 0;
        for (int j = n; j >= i; j -= 2) {
            cout << j;
            temp += j;
            if (j != i) {
                cout << " + ";
            }
        }
        cout << " = " << temp << endl;
        total += temp;
    }
    return total;
}

int main() {
    int n = 10; 
    int hasil_total = perkalian_deret_genap(n);
    cout << "----------" << endl;
    cout << "Total: " << hasil_total << endl;

    return 0;
}

