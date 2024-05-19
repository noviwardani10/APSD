#include <iostream>
#include <iomanip>
using namespace std;

struct Pegawai {
    char nama[15];
    int jamKerja;
    int honorLembur;
    int totalHonor;
};

int main() {
    int jumlah;
    const int honorHarian = 15000;
    const int tarifLembur = 5000;

    cout << "Masukkan jumlah pegawai: ";
    cin >> jumlah;

    Pegawai pegawai[jumlah];

    for (int i = 0; i < jumlah; ++i) {
        cout << "\nMasukkan data pegawai ke-" << i+1 << ":\n";
        cout << "Masukkan Nama: ";
        cin >> pegawai[i].nama;
        cout << "Masukkan Jam Kerja: ";
        cin >> pegawai[i].jamKerja;

        if (pegawai[i].jamKerja > 8) {
            pegawai[i].honorLembur = (pegawai[i].jamKerja - 8) * tarifLembur;
        } else {
            pegawai[i].honorLembur = 0;
        }
        pegawai[i].totalHonor = honorHarian + pegawai[i].honorLembur;
    }

    cout << "\n| No | Nama Pegawai     | Jam Kerja | Honor Lembur | Total Honor |\n";
    cout << "|----|------------------|-----------|--------------|-------------|\n";
    for (int i = 0; i < jumlah; ++i) {
        cout << "| " << setw(2) << i+1 << " | " << setw(16) << left << pegawai[i].nama
             << " | " << setw(9) << right << pegawai[i].jamKerja
             << " | " << setw(12) << pegawai[i].honorLembur
             << " | " << setw(11) << pegawai[i].totalHonor << " |\n";
    }

    return 0;
}
