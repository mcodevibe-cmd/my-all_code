#include<iostream>
using namespace std;
int main(){

 int i,n,num[100],max;
 cout<<"How many number: ";
 cin>>n;
 for(i=0;i<n;i++){
    cin>>num[i];
 }
 max=num[0];
 for(i=1;i<n;i++){
    if(num[0]<num[i]){
     max=num[i];
    }
 }
 cout<<"Maximum value is: "<<max;


    return 0;
}
