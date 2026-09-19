#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string NamaKaryawan;
    string namaposisi;
    int JumlahJamKerja;
    int TarifPerjam;
    int PosisiKaryawan;

    cout << left;
    cout << setw(30) << "Masukan Nama Karyawan" << ": ";
    cin >> NamaKaryawan;
    cout << setw(30) << "Masukan Jumlah Jam Kerja" << ": ";
    cin >> JumlahJamKerja;
    cout << setw(30) << "===Pilihan Posisi===" << endl;
    cout << setw(30) << "1. Magang" << endl;
    cout << setw(30) << "2. Staff Junior" << endl;
    cout << setw(30) << "3. Staff Senior" << endl;
    cout << setw(30) << "4. Pemimpin Tim" << endl;
    cout << setw(30) << "5. Kepala Departemen" << endl;
    cout << endl;
    cout << setw(30) << "Masukan Posisi Karyawan" << ": ";
    cin >> PosisiKaryawan;

    switch (PosisiKaryawan)
    {
    case 1:
        namaposisi = "Magang";
        TarifPerjam = 25000;
        break;
    case 2:
        namaposisi = "Staff Junior";
        TarifPerjam = 35000;
        break;
    case 3:
        namaposisi = "Staff Senior";
        TarifPerjam = 50000;
        break;
    case 4:
        namaposisi = "Pemimpin Tim";
        TarifPerjam = 65000;
        break;
    case 5:
        namaposisi = "Kepala Departemen";
        TarifPerjam = 75000;
        break;
    default:
        cout << "Input Tidak Valid!!" << endl;
        return 0;
    }

    cout << "==================================================================\n";
    cout << setw(20) << "Nama karyawan" << setw(20) << "Jumlah Jam Kerja" << setw(20) << "Posisi" << setw(20) << "Tarif Per Jam" << setw(20) << "Total Gaji" << endl;
    cout << setw(20) << NamaKaryawan << setw(20) << JumlahJamKerja << setw(20) << namaposisi << setw(20) << TarifPerjam << setw(20) << JumlahJamKerja * TarifPerjam << endl;

    return 0;
}