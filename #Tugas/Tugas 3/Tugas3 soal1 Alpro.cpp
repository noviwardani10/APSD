#include <iostream>
using namespace std;

int main() {
    string nama,juara;
    float p1, p2, p3, average;

    cout << "Masukkan nama siswa: ";
    cin >> nama;

    cout << "Masukkan nilai pertandingan 1: ";
    cin >> p1;

    cout << "Masukkan nilai pertandingan 2: ";
    cin >> p2;

    cout << "Masukkan nilai pertandingan 3: ";
    cin >> p3;

    average = (p1 + p2 + p3) / 3;

    if (average > 80) {
        cout << nama << " menjadi Juara I dengan nilai rata-rata " << average << endl;
    } else if (average > 75) {
        cout << nama << " menjadi Juara II dengan nilai rata-rata " << average << endl;
    } else if (average > 65) {
        cout << nama << " menjadi Juara III dengan nilai rata-rata " << average << endl;
    } else {
        cout << nama << " tidak juara dengan nilai rata-rata " << average << endl;
    }
    cout << "\nLayar Keluaran\n";
    cout << "Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << average << " dan menjadi juara " << juara << " dari hasil perlombaan yang diikutinya." << endl;

    return 0;}
