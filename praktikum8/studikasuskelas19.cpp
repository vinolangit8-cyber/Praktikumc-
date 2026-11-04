#include <iostream>
using namespace std;

void fillarray(int *arr, int size, int value)
{
    for (int i = 0; i <= size; i++)
    {
        arr[i] = value;
    }
}
int main()
{
    int arr[5];
    fillarray(arr, 5, 10);
    cout << "array setelah di isi: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}