#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

    float JarakTempuh;
    float KomsumsiBahanBakar;
    float HargaBahanbakar;

    cout << left;
    cout << setw(30) << "Jarak Tempuh (km)" << ": ";
    cin >> JarakTempuh;
    cout << setw(30) << "Komsumsi Bahan bakar (Km/L)" << ": ";
    cin >> KomsumsiBahanBakar;
    cout << setw(30) << "Harga Bahan Bakar (Rp/L)" << ": ";
    cin >> HargaBahanbakar;

    cout << "=========================================================" << endl
         << left;
    cout << setw(30) << "Total Biaya Bahan Bakar" << ":Rp " << fixed << setprecision(2) << HargaBahanbakar * (JarakTempuh / KomsumsiBahanBakar) << endl;

    return 0;
}