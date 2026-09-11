#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   
    cout << left;
    cout << setw(20) << "Meter" << setw(20) << "Sentimeter" << setw(20) << "Milimeter" << setw(20) << "Kilometer" << endl;
    for (int i = 1; i <= 10; i++)
    {
    cout << setw(20) << i
         << setw(20) << i * 100
         << setw(20) << i * 100
         << setw(20) << fixed << setprecision(3) << (float)i / 100 <<endl;
    }
    return 0;
}