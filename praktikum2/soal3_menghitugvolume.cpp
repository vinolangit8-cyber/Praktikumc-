#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int Panjang;
    int Lebar;
    int Tinggi;

    cout << left;
    cout << setw(30) << "Masukan Panjang" << ": ";
    cin >> Panjang;
    cout << setw(30) << "Masukan Lebar" << ": ";
    cin >> Lebar;
    cout << setw(30) << "Masukan Tinggi" << ": ";
    cin >> Tinggi;

    cout << left;
    cout << endl;
    cout << setw(20) << "Panjang" << setw(20) << "Lebar" << setw(20) << "Tinggi" << setw(20) << "Volume" << setw(20) << "Luas Permukaan" << endl;
    cout << setw(20) << Panjang
         << setw(20) << Lebar
         << setw(20) << Tinggi
         << setw(20) << Panjang * Lebar * Tinggi
         << setw(20) << 2 * (Panjang * Lebar + Panjang * Tinggi + Lebar * Tinggi)
         << endl;

    return 0;
}