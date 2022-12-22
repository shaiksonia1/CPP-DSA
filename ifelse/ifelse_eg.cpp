#include<iostream>
using namespace std;

//Take values of length and breadth of a rectangle from user and check if it is square or not.

int main () {
    
 int length; 
cin>>length;

int breadth;
cin>>breadth;

if(length==breadth) {
    cout<<"it is a square";
}

else{
    cout<<"it is not a square";
}

    return 0;
}