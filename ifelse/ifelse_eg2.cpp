#include<iostream>
using namespace std;

// Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).

int main () {
char a;
cin>>a;
cout<<"enter a character";

if(a>='A' && a<='Z') {
    cout<<a<<"is an uppercase letter";
}
else if(a>='a'&& a<='z') {
    cout<<a<<"is a lowercase letter";
}else {
    cout<<a<<"is not an alphabet";
}

    return 0;
}