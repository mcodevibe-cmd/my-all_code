/*write a program it takes days as a input and determine number of y,d,m,w,restdays*/

#include<iostream>
using namespace std;
int main(){
   int d,y,m,w,restDays; //declare variable
   cout<<"Enter the total days: ";
   cin>>d;
   y=d/365;
   cout<<"the total years is : "<<y<<endl;;
    d=d-(y*365);  // Got an extra day
    m=d/30;
    cout<<"\nThe total months is: "<<m;
    d=d-(m*30);  
    w=d/7;
    cout<<"\nThe total weeks is: "<<w;
    cout<<"\nthe total restday is: "<<d;

    return 0;
}