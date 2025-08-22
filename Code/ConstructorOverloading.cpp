#include<iostream>
using namespace std;
class my_name{
    private:
    int n1,n2;
    double c;
    string name;
    public:
    my_name(){
    cout<<"MY Name is MUAJ"<<endl;
    }
     my_name(int x,int y){
       n1=x;
       n2=y;
     cout<<"Adding two number= "<<(n1+n2)<<endl;
     }
     my_name(int x,double y){
       n1=x;
       c=y;
     cout<<"Adding two number= "<<(n1+c)<<endl;
     }
     
};
int main(){
    my_name obj;
   // int a,b;
   // cin>>a>>b;
    my_name obj1(1,2);
   my_name obj2(3,3.547);
    return 0;
}