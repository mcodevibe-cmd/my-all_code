/*write a program to adding area of  rectangular shape and area of  triangle shape*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double length,width,a,b,c,rectangular,s,triangle,total_area;
    cout<<"Enter the value ";
    cin>>length>>width>>a>>b>>c;
    rectangular=(length*width);
    cout<<"rectangular";
   s=((a+b+c)/2);
   triangle=(sqrt(s*(s-a)*(s-b)*(s-c)));
   cout<<"triangle";
   total_area=(rectangular+triangle);
   cout<<"total sum= "<<total_area;
    return 0;
}
