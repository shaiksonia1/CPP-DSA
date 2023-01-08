#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
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


E 
D E 
C D E 
B C D E 
A B C D E 


*/