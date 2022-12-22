#include<iostream>
using namespace std;

int maxx(int num1, int num2){

    if(num1>=num2)return num1;
    else return num2;
}

int main(){

    int num1,num2;
    cin>>num1>>num2;
    int minimum = maxx(num1,num2);
    cout<< minimum;

    return 0;

}