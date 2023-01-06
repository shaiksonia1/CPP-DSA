#include <iostream>
using namespace std;
void printTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;

    cout << "printTriangle" << endl;
    printTriangle(n);

    return 0;
}

/*
output:
A
BB
CCC
DDDD
EEEEE


*/