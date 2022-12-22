#include <iostream>
using namespace std;
int main () {
   //data types
   //int, long, long long, double, float
   // string and getline
   //char


   //int
   int x = 10; 

   //long
   long y = 15;
   cin >> y;
   
   //long long
   long long z = 1500000000;
    
    //float,double
    float a = 5.9;
    double b = 7;
    cout<<"value of b: "<<b;

    //string
    string s1;
    string s2;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2;

    //getline
    string str;
    getline(cin,str);
    cout<< str;

    //char
    char ch='g';
    cin >> ch;
    cout << ch;

return 0;


}