
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Produk
{
    string nama;
    int harga;
    int terjual;
    int pendapatan;
};

int main()
{
    int jumlah;

    cout << "Masukkan jumlah produk: ";
    cin >> jumlah;

    if (jumlah == 0)
    {
        cout << "Tidak ada produk yang dianalisis." << endl;
        return 0;
    }

    if (jumlah < 0)
    {
        cout << "Jumlah produk tidak valid!" << endl;
        return 0;
    }

    vector<Produk> produk(jumlah);

    int total = 0;
    int tertinggi = 0;
    int indeks = 0;

    for (int i = 0; i < jumlah; i++)
    {
        cout << "\nProduk " << i + 1 << ": ";
        cin >> produk[i].nama;

        cout << "Harga: Rp ";
        cin >> produk[i].harga;

        cout << "Terjual: ";
        cin >> produk[i].terjual;

        produk[i].pendapatan =
            produk[i].harga * produk[i].terjual;

        total += produk[i].pendapatan;

        if (produk[i].pendapatan > tertinggi)
        {
            tertinggi = produk[i].pendapatan;
            indeks = i;
        }
    }

    double rata = (double)total / jumlah;

    cout << "\n=== HASIL ANALISIS PENJUALAN ===" << endl;

    cout << "Total pendapatan: Rp "
         << total << endl;

    cout << "Rata-rata pendapatan per produk: Rp "
         << rata << endl;

    cout << "Produk dengan pendapatan tertinggi: "
         << produk[indeks].nama << endl;

    cout << "Pendapatan: Rp "
         << tertinggi << endl;

    return 0;
}
