#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double kehadiran = 0.0;
    bool cek = true;

    while (cek == true)
    {
        for (int i = 1; i <= 5; i++)
        {
            double k;
            cout << "Apakah mahasiswa hadir di hari ke-" << i << "? (1 untuk hadir , 0 untuk tidak hadir):";
            cin >> k;
            if (k != 1 && k != 0)
            {
                cout << "[Error] masukan nilai yang sesuai (1 atau 0)";
                return 0;
            }
            kehadiran += k;
        }
        double presentase = kehadiran / 5 * 100;

        cout << "Kehadiran : " << presentase << "%" << endl;
        cout << "Status Kehadiran : ";
        if (presentase > 75)
        {
            cout << "Baik" << endl;
        }
        else if (presentase >= 50 && presentase <= 75)
        {
            cout << "Cukup" << endl;
        }
        else
        {
            cout << "Kurang" << endl;
        };
        cout << string(60, '=') << endl;
        ;
        cout << "Ingin mengecek kehadiran untuk mahasiswa lain? (1 untuk ya, selain itu untuk tidak) : ";

        int cek_lagi;
        cin >> cek_lagi;
        if (cek_lagi != 1)
        {
            cek = false;
        }
        kehadiran = 0.0;
    }
    return 0;
}
