#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int pilihanKonverensi;

    cout << left;
    cout << setw(30) << "=== Menu Konversi ===" << endl;
    cout << setw(30) << "1. Centimeter" << endl;
    cout << setw(30) << "2. Milimeter" << endl;
    cout << setw(30) << "3. Kilometer" << endl;

    cout << endl;
    cout << setw(30) << "Pilih tujuan konversi" << ": ";
    cin >> pilihanKonverensi;

    cout << setw(20) << "Meter";

    switch (pilihanKonverensi)
    {
    case 1:
        cout << setw(20) << "Centimeter";
        break;
    case 2:
        cout << setw(20) << "Milimeter";
        break;
    case 3:
        cout << setw(20) << "Kilometer";
        break;
    default:
        cout << "Pilihan tidak valid!";
        return 0;
        break;
    }

    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << setw(20) << i;

        switch (pilihanKonverensi)
        {
        case 1:
            cout << setw(20) << i * 100;
            break;
        case 2:
            cout << setw(20) << i * 1000;
            break;
        case 3:
            cout << setw(20) << fixed << setprecision(3)
                 << (float)i / 1000;
            break;
        }

        cout << endl;
    }
}