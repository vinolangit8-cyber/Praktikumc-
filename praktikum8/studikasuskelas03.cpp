#include <iostream>
using namespace std;

int main()
{
    char str[] = "programming";
    char *ptr = str;
    int count = 0;

    while (*ptr)
    {
        count++;
        ptr++;
    }
    cout << count;
}