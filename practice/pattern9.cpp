#include <iostream>
using namespace std;

void Diamond(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << " ";
        for (int j = 0; j <= n - i - 1; j++)
            cout << "* ";
        cout << endl;
    }
}

int main()
{
    int n = 5;
    cout << "Diamond" << endl;
    Diamond(n);
}