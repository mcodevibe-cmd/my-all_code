#include<iostream>
using namespace std;
class input{
    //private:
    int n1,n2;
    void muaj(){
        cout<<"Enter two number= ";
        cin>>n1>>n2;
    }
    public:
    void display(){
        muaj();
        cout<<"Adding two number= "<<n1+n2<<endl;
    }

};
int main(){
    input t;
    t.display();
    return 0;
}