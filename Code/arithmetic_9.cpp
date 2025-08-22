/*write a program to covert fahrenheit to celcius*/

#include<iostream>
using namespace std;
int main(){
  float c,f;
  cout<<"Enter fahrenheit temperature: ";
  cin>>f;
  c=((f-32)/9)*5;
  cout<<"Celcius temperature is: "<<c;

    return 0;
}