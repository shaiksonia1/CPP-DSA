#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    if(n<m){
       cout<<"n is lesser than m";
    }
    else if(n==m){
        cout<<"n is equal to m";
    }

    else if(n>m){
        cout<<"n is greater than m";
    }



    return 0;
}