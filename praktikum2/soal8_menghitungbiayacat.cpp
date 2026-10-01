#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    float PanjangRuangan;
    float LebarRuangan;
    float TinggiRuangan;
    float HargaCatPerLiter;

    float LuasPermukaanDinding;

    cout << left;
    cout << setw(30) << "Masukan Panjang Ruangan" << ": ";
    cin >> PanjangRuangan;
    cout << setw(30) << "Masukan Lebar Ruangan" << ": ";
    cin >> LebarRuangan;
    cout << setw(30) << "Masukan Tinggi Ruangan" << ": ";
    cin >> TinggiRuangan;
    cout << setw(30) << "Masukan Harga Cat Per Liter" << ": ";
    cin >> HargaCatPerLiter;
    LuasPermukaanDinding = (float)2 * (PanjangRuangan * TinggiRuangan + LebarRuangan * TinggiRuangan);

    cout << "=====================================================" << endl
         << left;
    cout << setw(20) << "Luas Dinding" << ": " << fixed << setprecision(2) << LuasPermukaanDinding << " m^2" << endl;
    cout << setw(20) << "cat yang Dibutuhkan"<< ": "<< fixed << setprecision(2) << LuasPermukaanDinding / 10 << "liter" << endl;
    cout << setw(20) << "Total Biaya Cat" << ":Rp " << fixed << setprecision(2) << LuasPermukaanDinding / 10 * HargaCatPerLiter << endl;
    return 0;
}