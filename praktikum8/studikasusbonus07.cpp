
#include <iostream>
#include <string>
using namespace std;

struct Proyek
{
    string nama;
    long long anggaran;
    int pekerja;
};

string formatRupiah(long long angka)
{
    string hasil = "";
    int hitung = 0;

    while (angka > 0)
    {
        if (hitung == 3)
        {
            hasil = "." + hasil;
            hitung = 0;
        }

        hasil = char('0' + angka % 10) + hasil;
        angka /= 10;
        hitung++;
    }

    return "Rp " + hasil;
}

void tampilkan(Proyek *data, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Proyek " << i + 1 << ": \""
             << data[i].nama << "\", Anggaran: "
             << formatRupiah(data[i].anggaran)
             << ", Pekerja: " << data[i].pekerja << endl;
    }
}

int main()
{
    int n;

    cout << "Masukkan jumlah proyek: ";
    cin >> n;

    Proyek *data = new Proyek[n];

    cout << "Masukkan data proyek:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Nama proyek " << i + 1 << ": ";
        getline(cin >> ws, data[i].nama);

        cout << "Anggaran: ";
        cin >> data[i].anggaran;

        cout << "Jumlah pekerja: ";
        cin >> data[i].pekerja;
    }

    Proyek baru;

    cout << "\nTambahkan proyek baru:" << endl;

    cout << "Nama proyek: ";
    getline(cin >> ws, baru.nama);

    cout << "Anggaran: ";
    cin >> baru.anggaran;

    cout << "Jumlah pekerja: ";
    cin >> baru.pekerja;

    Proyek *temp = new Proyek[n + 1];

    for (int i = 0; i < n; i++)
    {
        temp[i] = data[i];
    }

    temp[n] = baru;

    delete[] data;
    data = temp;
    n++;

    cout << "\nDaftar proyek setelah penambahan:" << endl;
    tampilkan(data, n);

    int indeks;

    cout << "\nMasukkan indeks proyek yang dihapus (0-"
         << n - 1 << "): ";
    cin >> indeks;

    if (indeks >= 0 && indeks < n)
    {
        for (int i = indeks; i < n - 1; i++)
        {
            data[i] = data[i + 1];
        }

        n--;

        cout << "\nDaftar proyek setelah penghapusan:" << endl;
        tampilkan(data, n);

        long long totalAnggaran = 0;
        int totalPekerja = 0;
        int terbesar = 0;

        for (int i = 0; i < n; i++)
        {
            totalAnggaran += data[i].anggaran;
            totalPekerja += data[i].pekerja;

            if (data[i].anggaran > data[terbesar].anggaran)
            {
                terbesar = i;
            }
        }

        cout << "\nTotal anggaran seluruh proyek: "
             << formatRupiah(totalAnggaran) << endl;

        cout << "Rata-rata jumlah pekerja per proyek: "
             << (double)totalPekerja / n << endl;

        cout << "Proyek dengan anggaran terbesar: \""
             << data[terbesar].nama << "\" ("
             << formatRupiah(data[terbesar].anggaran)
             << ")" << endl;
    }
    else
    {
        cout << "Indeks proyek tidak valid!" << endl;
    }

    delete[] data;

    return 0;
}
