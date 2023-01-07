#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char c = 65;
        for (int k = n - i; k; k--)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << c++;
        c -= 1;
        for (int p = 2; p <= i; p++)
            cout << --(c);
        cout << endl;
    }
}

int main()
{
    int n = 5;
    cout << "printTriangle" << endl;
    printTriangle(n);
}

/*

output:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/