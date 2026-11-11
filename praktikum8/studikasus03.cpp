#include <iostream>
using namespace std;

void tampilkan(int **matriks, int baris, int kolom, int i = 0)
{
    if (i == baris)
        return;

    for (int j = 0; j < kolom; j++)
    {
        cout << matriks[i][j] << " ";
    }

    cout << endl;
    tampilkan(matriks, baris, kolom, i + 1);
}

int main()
{
    int baris, kolom;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    if (baris <= 0 || kolom <= 0)
    {
        cout << "Ukuran matriks tidak valid";
        return 0;
    }

    int **matriks = new int *[baris];
    int **trans = new int *[kolom];

    for (int i = 0; i < baris; i++)
        matriks[i] = new int[kolom];

    for (int i = 0; i < kolom; i++)
        trans[i] = new int[baris];

    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cin >> matriks[i][j];
            trans[j][i] = matriks[i][j];
        }
    }

    cout << "\nMatriks asli:\n";
    tampilkan(matriks, baris, kolom);

    cout << "\nMatriks transpose:\n";
    tampilkan(trans, kolom, baris);

    for (int i = 0; i < baris; i++)
        delete[] matriks[i];

    for (int i = 0; i < kolom; i++)
        delete[] trans[i];

    delete[] matriks;
    delete[] trans;

    return 0;
}
