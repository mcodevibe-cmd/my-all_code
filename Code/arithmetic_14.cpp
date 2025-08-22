/*write a program to enter two angles of a triangle and find a thrid angle*/

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter two angles value: ";
    cin>>x>>y;
    z=180-(x+y);
    cout<<"Thrid value is= "<<z;
    return 0;
}