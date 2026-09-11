#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;
int main()
{
    string NamaKaryawan;
    int JamKerja;
    int TarifPerjam;

    cout << left;
    cout << setw(30) << "Masukan Nama Karyawan" << ": ";
    cin >> NamaKaryawan;
    cout << setw(30) << "Masukan Jam Kerja" << ": ";
    cin >> JamKerja;
    cout << setw(30) << "Masukan Tarif Perjam" << ": ";
    cin >> TarifPerjam;

    cout << left;
    cout << endl;
    cout << setw(20) << "Nama" << setw(20) << "Jam Kerja" << setw(20) << "Tarif Perjam" << setw(20) << "Gaji Total" << endl;
    cout << setw(20) << NamaKaryawan << setw(20) << JamKerja << setw(20) << TarifPerjam << setw(20) << TarifPerjam * JamKerja << endl;

    return 0;
}