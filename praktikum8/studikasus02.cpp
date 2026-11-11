#include <iostream>
using namespace std;

int main () {
    cout << "Matriks A (2 x 3)" << endl;

    int matriks [2][3] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++){
            cin >> matriks [i][j];
        }
    }
    int matriksc [2][2] = {0};
    
    cout << "matriks B (3 x 2)" << endl;

    int matriksb [3][2] = {0};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2;j++){
            cin >> matriksb [i][j];
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 3; k++){
                matriksc [i][j] += matriks[i][k] * matriksb [k][j];
            }
        }
    }
    cout << "hasil perkalian matriks A dan matriks B: " << endl;
    for (int i = 0; i < 2;i++) {
        for (int j = 0; j < 2; j++){
            cout << matriksc [i][j] << " ";
        }
        cout << endl;
    }

    
}