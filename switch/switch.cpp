#include<iostream>
using namespace std;

/*
Take the day no. and print the corresponding day
for 1 print monday
for 2 print tuesday
*/

 int main(){
    int day;
    cin >>  day;

    switch(day){
        case 1:
             cout<<"Sunday";
             break;

        case 2:
              cout<<"Monday";
              break;

        case 3:
        cout<<"Tuesday";
        break;

        case 4:
        cout<<"wednesday";
        break;

        case 5:
        cout<<"Thursday";
        break;

        case 6:
        cout<<"Friday";
        break;

        case 7:
        cout<<"Saturday";
        break;


    }
    cout<<"check";
    return 0;
 }