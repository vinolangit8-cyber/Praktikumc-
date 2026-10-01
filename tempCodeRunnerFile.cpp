#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;

    cout << "Masukkan nilai x: ";
    cin >> x;

   
    if (4 - x * x >= 0) {
        double hasil = sqrt(4 - x * x);

        cout << "Input valid." << endl;
        cout << "Nilai f(x) = " << hasil << endl;
    } else {
        cout << "Input tidak valid." << endl;
        cout << "Nilai x harus berada pada domain [-2, 2]." << endl;
    }

    return 0;
}