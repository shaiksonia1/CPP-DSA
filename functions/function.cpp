#include<iostream>
using namespace std;

//functions are set of code which performs something for you
//functions are used to modularize code
//functions are used to increase readability
//functions are used to use same code multiple times
//void-> which does not return anything
//return
//parameterised
//non-parameterised

void printName(string name) {
    cout<<"hey"<< " "<< name<<endl;
}


int main() {
string name;
cin>>name;
printName(name);

string name1;
cin>>name1;
printName(name1);

    return 0;
}