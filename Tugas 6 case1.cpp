#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    char nim[5];
    char nama[15];
    float nilaiUTS;
    float nilaiUAS;
    float nilaiAkhir;
    char nilaiHuruf;
};

char hitungNilaiHuruf(float nilaiAkhir) {
    if (nilaiAkhir >= 80) return 'A';
    else if (nilaiAkhir >= 70) return 'B';
    else if (nilaiAkhir >= 56) return 'C';
    else if (nilaiAkhir >= 47) return 'D';
    else return 'E';
}

int main() {
    int jumlah;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;
    
    Mahasiswa mahasiswa[jumlah];

    for (int i = 0; i < jumlah; ++i) {
        cout << "\nMasukkan data mahasiswa ke-" << i+1 << ":\n";
        cout << "Masukkan NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Masukkan Nama: ";
        cin >> mahasiswa[i].nama;
        cout << "Masukkan Nilai UTS: ";
        cin >> mahasiswa[i].nilaiUTS;
        cout << "Masukkan Nilai UAS: ";
        cin >> mahasiswa[i].nilaiUAS;

        mahasiswa[i].nilaiAkhir = (mahasiswa[i].nilaiUTS * 0.6) + (mahasiswa[i].nilaiUAS * 0.4);
        mahasiswa[i].nilaiHuruf = hitungNilaiHuruf(mahasiswa[i].nilaiAkhir);
    }

    
    cout << "\n| No | Nama Mahasiswa    | Nilai UTS | Nilai UAS | Nilai Akhir | Nilai Huruf |\n";
    cout << "|----|-------------------|-----------|-----------|-------------|-------------|\n";
    for (int i = 0; i < jumlah; ++i) {
        cout << "| " << setw(2) << i+1 << " | " << setw(17) << left << mahasiswa[i].nama 
             << " | " << setw(9) << right << mahasiswa[i].nilaiUTS 
             << " | " << setw(9) << mahasiswa[i].nilaiUAS 
             << " | " << setw(11) << mahasiswa[i].nilaiAkhir 
             << " | " << setw(11) << mahasiswa[i].nilaiHuruf << " |\n";
    }

    return 0;
}
