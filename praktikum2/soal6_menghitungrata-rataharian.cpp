#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

    float Suhu;
    float Total = 0;
    float Ratarata;

    cout << left;
    cout << setw(20) << "Suhu Hari 1" << ": ";
    cin >> Suhu;
    Total += Suhu;
    cout << setw(20) << "Suhu Hari 2" << ": ";
    cin >> Suhu;
    Total += Suhu;
    cout << setw(20) << "Suhu Hari 3" << ": ";
    cin >> Suhu;
    Total += Suhu;
    cout << setw(20) << "Suhu Hari 4" << ": ";
    cin >> Suhu;
    Total += Suhu;
    cout << setw(20) << "Suhu Hari 5" << ": ";
    cin >> Suhu;
    Total += Suhu;

    Ratarata = Total / 5;

    cout << left;
    cout << endl;
    cout << setw(20) << "Rata rata Suhu" << ": " << fixed << setprecision(1) << Ratarata << endl;

    return 0;
}