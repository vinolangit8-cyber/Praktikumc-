#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double rupiah;
    double kurs;
    string mataUang;
    int pilihanKonverensi;

    cout << left;
    cout << setw(30) << "masukkan jumlah rupiah: ";
    cin >> rupiah;
    cout << setw(30) << "=== Pilihan Konversi (18 September 2026)===" << endl;
    cout << setw(30) << "1. Dolar Singapura" << "Rp. 12850" << endl;
    cout << setw(30) << "2. Yuan Tiongkok" << "Rp. 2490" << endl;
    cout << setw(30) << "3. Poundsterling" << "Rp. 23890" << endl;
    cout << setw(30) << "4. Franc Swiss" << "Rp. 22150" << endl;
    cout << setw(30) << "5. Dolar Australia" << "Rp. 11650" << endl;
    cout << setw(30) << "6. Dong Vietnam" << "Rp. 0.68" << endl;
    cout << setw(30) << "7. Peso Filipina" << "Rp. 310" << endl;
    cout << setw(30) << "8. Riyal Saudi" << "Rp. 4730" << endl;
    cout << endl;
    cout << setw(30) << "Masukkan pilihan Tujuan Konverensi" << ": ";
    cin >> pilihanKonverensi;
    switch (pilihanKonverensi)
    {
    case 1:
        mataUang = "Dolar Singapura";
        kurs = 12850;
        break;
    case 2:
        mataUang = "Yuan Tiongkok";
        kurs = 2490;
        break;
    case 3:
        mataUang = "Poundsterling";
        kurs = 23890;
        break;
    case 4:
        mataUang = "Franc Swiss";
        kurs = 22150;
        break;
    case 5:
        mataUang = "Dolar Australia";
        kurs = 11650;
        break;
    case 6:
        mataUang = "Dong Vietnam";
        kurs = 0.68;
        break;
    case 7:
        mataUang = "Peso Filipina";
        kurs = 310;
        break;
    case 8:
        mataUang = "Riyal Saudi";
        kurs = 4730;
        break;

    default:
        cout << "Input Tidak Valid!!";
        return 0;
    }

    cout << "==========================" << endl
         << left;
    cout << setw(15) << "Jumlah Rupiah " << ": Rp " << rupiah << endl;
    cout << setw(15) << "Jumlah " + mataUang << ": " << fixed << setprecision(2) << rupiah / kurs << endl;

    return 0;
}