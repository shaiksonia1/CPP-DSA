#include <iostream>
using namespace std;
void printSquare(int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;
    cout << "complete square star paterrn of" << n << "lines:" << endl;
    printSquare(n);
}

/*
To print the the complete square :

There are five lines. So consider n = 5. Since we are trying to print the complete square. Each row will print n number of stars.
The corresponding table to frame the formula is like below −

Line number(i)  Star Count (j)
1	               7
2	               7
3	               7
4	               7
4	               7
5                  7

Here star count is constant for all rows. Let us see the algorithm for this −

Algorithm
read number of lines as input n
for i ranging from 1 to n, do
for j ranging from 1 to n, do
print asterisk
end for
move the cursor to the next line
end for


output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *


*/