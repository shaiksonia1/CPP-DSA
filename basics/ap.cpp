#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,n;
    cout<<"enter the value of a and n ";
    cin>>n;
    a=0;
    for(int i=1; i<=n; i++) {
        a=a+i;
        cout<<a<< endl;
    }
    return 0;
}
