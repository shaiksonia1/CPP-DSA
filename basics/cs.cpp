#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin>>a;
    if(a%5==0){
        for(int i=1;i<=10;i++){
            cout<<a*i<< endl;
        }
    }
    else {
        cout<<"number is not divisible by 5";
    }
    return 0;
}
