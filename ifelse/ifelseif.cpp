#include<iostream>
using namespace std;

int main() {
int marks;
cin>>marks;

if(marks<25){
    cout<<"your grade is F";
}
else if(marks<=44){
    cout<<"your grade is E";
}

else if( marks<=49) {
    cout<<"your grade is D";
}

else if( marks<=59) {
    cout<<"your grade is C";
}
else if ( marks<=79) {
    cout<<"your grade is B";
}
else if ( marks<=100) {
    cout<<"your grade is A";
}
    return 0;
}