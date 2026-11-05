#include <iostream>
using namespace std;

int main()
{
    char str[] = "hello, world!";
    char *ptr = str;

    cout << "string: ";
    while (*ptr)
    {
        cout << *ptr;
        ptr++;
    }
}