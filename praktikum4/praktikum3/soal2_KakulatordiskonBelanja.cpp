#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int hargaBarang;
    float diskon;
    int urutanBarang;
    string namaBarang;
    cout << left;
    cout << setw(30) << "=== Pilihan barang ===" << endl;
    cout << setw(30) << "1. Beras 5kg" << "Rp. 65000" << endl;
    cout << setw(30) << "2. Gula Pasir 1kg" << "Rp. 17000" << endl;
    cout << setw(30) << "3. Minyak Goreng 2L" << "Rp. 34000" << endl;
    cout << setw(30) << "4. Telur Ayam 1kg" << "Rp. 28000" << endl;
    cout << setw(30) << "5. Gas LPG 3kg" << "Rp. 22000" << endl;
    cout << endl;
    cout << setw(30) << "Masukkan pilihan Barang" << ": ";
    cin >> urutanBarang;
    switch (urutanBarang)
    {
        case 1:
        namaBarang = "Beras 5kg";
        hargaBarang = 65000;
        break;
        case 2:
        namaBarang = "Gula Pasir 1kg";
        hargaBarang = 17000;
        break;
        case 3:
        namaBarang = "Minyak Goreng 2L";
        hargaBarang = 34000;
        break;
        case 4:
        namaBarang = "Telur Ayam 1kg";
        hargaBarang = 28000;
        break;
        case 5:
        namaBarang = "Gas LPG 3kg";
        hargaBarang = 22000;
        break;

        default:
        cout << "Input Tidak Valid!!";
        return 0;
    }
    cout << setw(30)<< "masukkan diskon (%)" << ": ";
    cin >> diskon;

    cout << "=========================" << endl << left;
    cout << setw(15) << "Nama Barang " << ": "  << namaBarang << endl;
    cout << setw(15) << "Harga awal " << ": Rp "  << hargaBarang << endl;
    cout << setw(15) << "Diskon " << ": " << diskon << "%" << endl;
    cout << setw(15) << "Harga akhir " << ": " << fixed << setprecision(2) << hargaBarang - (hargaBarang*diskon/100)<< endl;

    return 0;
}