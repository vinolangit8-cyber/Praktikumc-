#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    do
    {
        int jumlahBarang;
        double harga, total = 0, diskon, totalSetelahDiskon;
        cout << "Masukkan jumlah barang: ";
        cin >> jumlahBarang;
        for (int i = 1; i <= jumlahBarang; i++)
        {
            cout << "Masukkan harga barang ke-" << i << ": Rp ";
            cin >> harga;
            total += harga;
        }
        // Menentukan diskon
        if (total > 500000)
        {
            diskon = total * 0.10;
        }
        else if (total >= 250000)
        {
            diskon = total * 0.05;
        }
        else
        {
            diskon = 0;
        }
        totalSetelahDiskon = total - diskon;
        cout << "Total Harga: Rp " << total << endl;
        cout << "Diskon: Rp " << diskon << endl;
        cout << "Total Setelah Diskon: Rp "
             << totalSetelahDiskon << endl;
        cout << "Ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): ";
        cin >> pilihan;
    } while (pilihan == 1);
    return 0;
}
