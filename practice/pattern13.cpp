#include <iostream>
using namespace std;

int num = 1;
void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
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