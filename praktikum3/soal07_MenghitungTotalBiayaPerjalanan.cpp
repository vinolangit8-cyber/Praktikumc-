#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float jarakTempuh;
    float konsumsiBahanBakar;
    float hargaBahanBakar;

    cout << "masukkan jarak tempuh (km)            : ";
    cin >> jarakTempuh;
    cout << "masukkan konsumsi bahan bakar(km/l)   : ";
    cin >> konsumsiBahanBakar;
    cout << "masukkan harga bahan bakar(Rp/l)      : ";
    cin >> hargaBahanBakar;

    cout << "============================================" << endl
         << left;
    cout << setw(30) << "Total Biaya Bahan Bakar " << ": Rp" << fixed << setprecision(2) << hargaBahanBakar * (jarakTempuh / konsumsiBahanBakar) << endl;
    if (konsumsiBahanBakar > 15)
        cout << setw(30) << "Tingkat Efisiensi " << ": " << "Efisien" << endl;
    else if (konsumsiBahanBakar <= 15 && konsumsiBahanBakar >= 10)
        cout << setw(30) << "Tingkat Efisiensi " << ": " << "Cukup Efisien" << endl;
    else if (konsumsiBahanBakar < 10 && konsumsiBahanBakar > 0)
        cout << setw(30) << "Tingkat Efisiensi " << ": " << "Boros" << endl;
    else
        cout << setw(30) << "Tingkat Efisiensi " << ": " << "Konsumsi BBM Tidak Wajar" << endl;

    return 0;
}