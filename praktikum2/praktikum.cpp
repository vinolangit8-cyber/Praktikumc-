#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

    string fullName = "Jane Doe";
    int age = 21;
    float height = 168.5;
    double averageScore = 85.75;
    bool isPassed = true;

    cout << left;
    cout << setw(30) << "Masukan Nama Lengkap" << ": ";
    cin >> fullName;
    cout << setw(30) << "Masukan Usia" << ": ";
    cin >> age;
    cout << setw(30) << "Masukan Tinggi Badan" << ": ";
    cin >> height;
    cout << setw(30) << "Masukan Nilai Rata-Rata" << ": ";
    cin >> averageScore;
    cout << setw(30) << "Masukan Status Lulus(1:iya/0:tidak)" << ": ";
    cin >> isPassed;

    cout << left;
    cout << endl;
    cout << setw(20) << "Nama Lengkap" << ": " << fullName << endl;
    cout << setw(20) << "Usia" << ": " << age << " tahun " << endl;
    cout << setw(20) << "Tinggi Badan" << ": " << fixed << setprecision(1) << height << " cm" << endl;
    cout << setw(20) << "Nilai Rata-Rata" << ": " << fixed << setprecision(2) << averageScore << endl;
    cout << setw(20) << "Status Kelulusan" << ": " << (isPassed ? "Lulus" : "Tidak Lulus") << endl;
    return 0;
}