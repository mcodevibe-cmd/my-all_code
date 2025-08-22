#include<iostream>

using namespace std;
class my_name{
  public:
  void call(){
    cout<<"Hello"<<endl;
  }
  virtual void function()=0;
};
class Rahim : public my_name{
    public:
    void function(){
        cout<<"i am rahim"<<endl;
    }
    };
    class Karim : public my_name{
    public:
    void function(){
        cout<<"i am karim"<<endl;
    }
};
int main(){
    my_name *m;
    Rahim r;
    Karim k;
    
    m = &r;
     m->call();
    m->function();
    m=&k;
   
    m->function();
    return 0;
}