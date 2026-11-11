#include <iostream>
using namespace std;

double hitungDiskon(double harga, int i)
{
    if (i == 0)
        return harga;

    if (harga > 500000)
        return harga * 0.90;

    if (harga > 100000)
        return harga * 0.95;

    return harga;
}

double totalHarga(double *harga, int n, int i = 0)
{
    if (i == n)
        return 0;

    return hitungDiskon(harga[i], 1) +
           totalHarga(harga, n, i + 1);
}

int main()
{
    int n;

    cout << "Masukkan jumlah barang: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Jumlah barang tidak valid";
        return 0;
    }

    double *harga = new double[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> harga[i];
    }

    cout << "\nRincian diskon:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Barang " << i + 1 << ": ";

        if (harga[i] > 500000)
            cout << "Diskon 10%\n";
        else if (harga[i] > 100000)
            cout << "Diskon 5%\n";
        else
            cout << "Tidak ada diskon\n";
    }

    cout << "\nTotal harga setelah diskon: Rp "
         << totalHarga(harga, n) << endl;

    delete[] harga;

    return 0;
}
