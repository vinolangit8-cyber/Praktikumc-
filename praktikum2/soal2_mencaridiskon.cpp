#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

   int HargaBarang;
   float Diskon;

    cout << left;
    cout << setw(30) << "Masukan Harga Awal" << ": ";
    cin >> HargaBarang ;
    cout << setw(30) << "Masukan Diskon" << ": ";
    cin >> Diskon;


    cout << "===============================================" << left << endl;
    cout << setw(20) << "Harga Awal" << ": Rp " << HargaBarang << endl;
    cout << setw(20) << "Diskon" << ": " << Diskon << "%" <<endl;
    cout << setw(20) << "Harga Akhir" << ": " << fixed << setprecision(2)<< HargaBarang - (HargaBarang * Diskon/100) << endl;
   
    return 0;
}