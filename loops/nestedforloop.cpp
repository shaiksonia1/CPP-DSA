#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin>>a;
    for(int i=2;i<=a;i++){
        for(int j=1;j<=10;j++){
            cout<<i*j<<" ";
        }
        cout<< endl;

    }

    return 0;
}
