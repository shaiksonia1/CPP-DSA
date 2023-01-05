#include <iostream>
using namespace std;
void printTriangle(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j >= 1; --j)
        {
            cout << j % 2 << " ";
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
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 


*/