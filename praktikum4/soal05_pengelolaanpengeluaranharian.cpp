#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const int JUMLAH_HARI = 7;

    string kategori[JUMLAH_HARI];
    int pengeluaran[JUMLAH_HARI];

    string daftarKategori[4] = {
        "Makanan", "Transportasi", "Hiburan", "Lain-lain"};

    int totalKategori[4] = {0, 0, 0, 0};
    int totalSeminggu = 0;
    int pengeluaranTerbesar = 0;
    int hariTerbesar = 0;

    cout << fixed << setprecision(2);

    for (int i = 0; i < JUMLAH_HARI; i++)
    {
        cout << "Masukkan kategori pengeluaran hari ke-"
             << i + 1
             << " (Makanan/Transportasi/Hiburan/Lain-lain): ";
        cin >> kategori[i];

        cout << "Masukkan jumlah pengeluaran: Rp ";
        cin >> pengeluaran[i];

        if (kategori[i] == "Makanan")
        {
            totalKategori[0] += pengeluaran[i];
        }
        else if (kategori[i] == "Transportasi")
        {
            totalKategori[1] += pengeluaran[i];
        }
        else if (kategori[i] == "Hiburan")
        {
            totalKategori[2] += pengeluaran[i];
        }
        else
        {
            kategori[i] = "Lain-lain";
            totalKategori[3] += pengeluaran[i];
        }

        totalSeminggu += pengeluaran[i];

        if (pengeluaran[i] > pengeluaranTerbesar)
        {
            pengeluaranTerbesar = pengeluaran[i];
            hariTerbesar = i;
        }
    }

    cout << "\nTotal Pengeluaran Makanan: Rp "
         << totalKategori[0] << ".00" << endl;

    cout << "Total Pengeluaran Transportasi: Rp "
         << totalKategori[1] << ".00" << endl;

    cout << "Total Pengeluaran Hiburan: Rp "
         << totalKategori[2] << ".00" << endl;

    cout << "Total Pengeluaran Lainnya: Rp "
         << totalKategori[3] << ".00" << endl;

    cout << "Total Selama Seminggu: Rp "
         << totalSeminggu << ".00" << endl;

    cout << "Pengeluaran Terbesar: Rp "
         << pengeluaranTerbesar
         << ".00 pada kategori "
         << kategori[hariTerbesar] << endl;

    int kategoriTerbesar = 0;

    for (int i = 1; i < 4; i++)
    {
        if (totalKategori[i] > totalKategori[kategoriTerbesar])
        {
            kategoriTerbesar = i;
        }
    }

    cout << "Kategori dengan Pengeluaran Terbanyak: "
         << daftarKategori[kategoriTerbesar]
         << ", sebesar Rp "
         << totalKategori[kategoriTerbesar] << ".00" << endl;

    return 0;
