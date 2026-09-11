#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

    int JumlahRupiah;
    float KursKonversi;

    cout << left;
    cout << setw(30) << "Masukan Jumlah Rupiah" << ": ";
    cin >> JumlahRupiah;
    cout << setw(30) << "Masukan Kurs Konversi" << ": ";
    cin >> KursKonversi;

    cout << left;
    cout << endl;
    cout << setw(20) << "Jumlah Rupiah" << ": Rp " << JumlahRupiah << endl;
    cout << setw(20) << "Jumlah Dollar" << ": $ " << fixed << setprecision(2) << JumlahRupiah/KursKonversi << endl;
   
    return 0;
}