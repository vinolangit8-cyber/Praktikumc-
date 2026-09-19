#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float panjang;
    float lebar;
    float tinggi;
    float hargaCat;

    float luasPermukaan;

    cout << "Masukkan panjang ruangan    : ";
    cin >> panjang;
    cout << "Masukkan lebar ruangan      : ";
    cin >> lebar;
    cout << "Masukkan tinggi ruangan     : ";
    cin >> tinggi;
    cout << "Masukkan harga cat per liter: ";
    cin >> hargaCat;

    luasPermukaan = (float)2 * (panjang * tinggi + lebar * tinggi);

    cout << "============================================" << endl
         << left;

    cout << setw(30) << "Luas Dinding" << ": "
         << fixed << setprecision(2) << luasPermukaan << " m^2" << endl;

    cout << setw(30) << "Kebutuhan Cat" << ": "
         << fixed << setprecision(2) << luasPermukaan / 10 << " liter" << endl;

    cout << setw(30) << "Biaya Cat" << ": Rp "
         << fixed << setprecision(2) << luasPermukaan / 10 * hargaCat << endl;

    if (luasPermukaan / 10 > 10)
        cout << setw(30) << "Kategori Cat" << ": Banyak" << endl;
    else if (luasPermukaan / 10 <= 10 && luasPermukaan / 10 >= 5)
        cout << setw(30) << "Kategori Cat" << ": Sedang" << endl;
    else if (luasPermukaan / 10 < 5 && luasPermukaan / 10 > 0)
        cout << setw(30) << "Kategori Cat" << ": Sedikit" << endl;
    else
        cout << setw(30) << "Kategori Cat" << ": Tidak ada" << endl;
}