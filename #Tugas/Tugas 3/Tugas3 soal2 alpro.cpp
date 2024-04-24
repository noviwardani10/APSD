#include <iostream>
#include <string>
using namespace std;

void hitung_nilai_akhir(string nama_siswa, float nilai_keaktifan, float nilai_tugas, float nilai_ujian) {
    
    float nilai_murni_keaktifan = nilai_keaktifan * 0.2;
    float nilai_murni_tugas = nilai_tugas * 0.3;
    float nilai_murni_ujian = nilai_ujian * 0.5;

    
    float nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;


    cout << "\nLayar Keluaran" << endl;
    cout << "Siswa yang bernama " << nama_siswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan:" << endl;
    cout << "Nilai Keaktifan * 20% : " << nilai_murni_keaktifan << endl;
    cout << "Nilai Tugas * 30% : " << nilai_murni_tugas << endl;
    cout << "Nilai Ujian * 50% : " << nilai_murni_ujian << endl;
    cout << "Jadi Siswa yang bernama " << nama_siswa << " memperoleh:" << endl;

    
    char grade;
    if (nilai_akhir > 80) {
        grade = 'A';
    } else if (nilai_akhir > 70) {
        grade = 'B';
    } else if (nilai_akhir > 56) {
        grade = 'C';
    } else if (nilai_akhir > 46) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    cout << "Nilai Akhir: " << nilai_akhir << endl;
    cout << "Grade: " << grade << endl;
}

int main() {
    cout << "Layar Masukkan\n" << endl;
    string nama_siswa;
    float nilai_keaktifan, nilai_tugas, nilai_ujian;
    cout << "Nama Siswa: ";
    getline(cin, nama_siswa);
    cout << "Nilai Keaktifan: ";
    cin >> nilai_keaktifan;
    cout << "Nilai Tugas: ";
    cin >> nilai_tugas;
    cout << "Nilai Ujian: ";
    cin >> nilai_ujian;
    
    hitung_nilai_akhir(nama_siswa, nilai_keaktifan, nilai_tugas, nilai_ujian);

    return 0;
}
