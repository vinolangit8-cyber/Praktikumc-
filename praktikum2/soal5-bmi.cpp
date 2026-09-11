#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

    float BeratBadan;
    float TinggiBadan;

    float BMI;

    cout << left;
    cout << setw(30) << "Masukan Berat Badan(kg)" << ": ";
    cin >> BeratBadan;
    cout << setw(30) << "Masukan Tinggi Badan(cm)" << ": ";
    cin >> TinggiBadan;
    BMI = BeratBadan / ((TinggiBadan / 100) * (TinggiBadan / 100));

    cout << left;
    cout << endl;
    cout << setw(30) << "BMI" << ": " << fixed << setprecision(2) << BMI << endl;
    if (24.9 >= BMI && BMI >= 18.5)
    {
        cout << setw(30) << "Status Berat Badan Ideal" << ": " << "Ideal" << endl;
    }
    else
    {
        cout << setw(30) << "Status Berat Badan Ideal" << ": " << "Tidak Ideal" << endl;
    }

    return 0;
}