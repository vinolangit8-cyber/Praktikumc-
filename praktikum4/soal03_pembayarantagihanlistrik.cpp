#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int hitung;
    do
    {
        double listrik;
        double tagihan;
        double tagihanDiskon;
        double tarif;
        double diskon;

        cout << "Masukan Penggunaan Listrik : ";
        cin >> listrik;

        if (listrik <= 100)
        {
            tarif = 1500;
        }
        else if (listrik > 100 && listrik <= 300)
        {
            tarif = 2000;
        }
        else
        {
            tarif = 3000;
        }

        tagihan = listrik * tarif;

        if (tagihan > 1000000)
        {
            diskon = tagihan * 10 / 100;
            tagihanDiskon = tagihan - diskon;
        }
        else
        {
            diskon = 0;
            tagihanDiskon = tagihan;
        }

        cout << "Total Penggunaan Listrik : " << fixed << setprecision(2) << listrik << " Kwh" << endl;
        cout << "Total Tagihan Sebelum Diskon : Rp " << fixed << setprecision(2) << tagihan << endl;
        cout << "Diskon : Rp " << fixed << setprecision(2) << diskon << endl;
        cout << "Total Tagihan Setelah Diskon : Rp " << fixed << setprecision(2) << tagihanDiskon << endl;
        cout << "Ingin menghitung tagihan untuk pengguna lain? (1 untuk ya, selain itu untuk tidak) : ";
        cin >> hitung;

    } while (hitung == 1);
    return 0;
}
