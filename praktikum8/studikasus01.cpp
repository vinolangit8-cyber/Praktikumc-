#include <iostream>
using namespace std;

int main()
{
    int jumlah;
    double total = 0;

    cout << "masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    double djumlah = jumlah;
    double nilai[jumlah];

    cout << "masukkan nilai mahasiswa: " << endl;

    for (int i = 0; i < jumlah; i++)
    {
        cout << "mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];
    }
    for (int i = 0; i < jumlah; i++)
    {
        total += nilai[i];
    }
    int nilaiterbesar = nilai[0];
    for (int i = 0; i < jumlah; i++)
    {
        if (nilai[i] > nilaiterbesar)
        {
            nilaiterbesar = nilai[i];
        }
    }
    cout << "nilai terbesar: " << nilaiterbesar << endl;

    int nilaikecil = nilai[0];
    for (int i = 0; i < jumlah; i++)
    {
        if (nilai[i] < nilaikecil)
        {
            nilaikecil = nilai[i];
        }
    }
    cout << "nilai terkecil: " << nilaikecil << endl;

    double ratarata = total / djumlah;
    cout << "rata-rata nilai: " << ratarata;

    return 0;
}