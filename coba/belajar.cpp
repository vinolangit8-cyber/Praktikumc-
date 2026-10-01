#include <iostream>
using namespace std;

int main()
{
    int jumlahMapel;
    double nilai, total, rataRata;
    int ulang;

    do
    {
        total = 0;

        cout << "Masukkan jumlah mata pelajaran: ";
        cin >> jumlahMapel;

        for (int i = 1; i <= jumlahMapel; i++)
        {
            cout << "Masukkan nilai mata pelajaran ke-" << i << ": ";
            cin >> nilai;
            total += nilai;
        }

        rataRata = total / jumlahMapel;

        cout << "Rata-rata Nilai: " << rataRata << endl;

        if (rataRata > 85)
        {
            cout << "Prestasi: Sangat Baik" << endl;
        }
        else if (rataRata >= 70)
        {
            cout << "Prestasi: Baik" << endl;
        }
        else if (rataRata >= 50)
        {
            cout << "Prestasi: Cukup" << endl;
        }
        else
        {
            cout << "Prestasi: Perlu Peningkatan" << endl;
        }

        cout << "Ingin menghitung nilai untuk siswa lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> ulang;

    } while (ulang == 1);

    return 0;
}