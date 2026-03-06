#include <iostream>
#include <string>

using namespace std; // Biar ga capek pake std:: di selanjutnya

int main() {
    system ("cls"); // Biar rapi ga belepotan di terminal
    string nama;
    int gol, jmlAnak;
    int gajiPokok = 0, tunjanganAnak = 0;
    int pajak, totalGaji;

    cout << "Masukkan nama anda : ";
    getline(cin, nama); // Pakai getline biar bisa input nama lengkap
    cout << "Masukan golongan (1,2,3) : ";
    cin >> gol;
    cout << "Jumlah anak : ";
    cin >> jmlAnak;

    // Menentukan Gaji Pokok berdasarkan Golongan
    switch (gol) {
        case 1:
            gajiPokok = 5000000;
            break;
        case 2:
            gajiPokok = 3000000;
            break;
        case 3:
            gajiPokok = 2500000;
            break;
        default:
            cout << "Golongan tidak valid!" << endl;
            return 0; // Keluar dari program kalau golongan salah
    }

    // Menghitung Pajak (5% dari gaji pokok)
    pajak = 0.05 * gajiPokok;

    // Menghitung Tunjangan Anak
    if (jmlAnak >= 1 && jmlAnak <= 2) {
        tunjanganAnak = jmlAnak * 500000;
    } else if (jmlAnak > 2) {
        tunjanganAnak = 750000;
    } else {
        tunjanganAnak = 0;
    }

    // Menghitung Total Gaji
    totalGaji = (gajiPokok - pajak) + tunjanganAnak;

    cout << "Gaji total : Rp. " << totalGaji << ",-" << endl;

    return 0;
}