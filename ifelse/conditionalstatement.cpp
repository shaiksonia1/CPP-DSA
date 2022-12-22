#include<iostream>
using namespace std;

int main() {
    //write a program that takes an input of age
    //and prints if you are an adult or not
    //>=18,yes
    //<18,no
int age;
cin>>age;
if(age>=18) {
    cout<<"you are an adult!";
}
else if (age<18) {
    cout<<"you re not an adult";
}

    return 0;
}



