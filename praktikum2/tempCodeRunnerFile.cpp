#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double suhu, total = 0, rataRata;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Suhu Hari " << i << ": ";
        cin >> suhu;
        total += suhu;
    }

    rataRata = total / 5;

    cout << fixed << setprecision(1);
    cout << "Rata-rata Suhu: " << rataRata << endl;

    return 0;
}