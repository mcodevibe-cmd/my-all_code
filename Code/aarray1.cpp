#include<iostream>
using namespace std;
int main(){
  double math[5],sum=0,avg;
  int i;
  cout<<"Enter 5 number= ";  //input
  for(i=0;i<5;i++){
    cin>>math[i];
  }
 
  for( i=0;i<5;i++){   //output
    sum+=math[i];
  }
  cout<<"The sum is= "<<sum<<endl;
  avg=sum/5;
  cout<<"Average is= "<<avg;
return 0;
}