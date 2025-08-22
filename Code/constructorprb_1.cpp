#include<iostream>
using namespace std;
class Myclass{ //the class

  public: //access specifier
  Myclass(){ //constructor
    cout<<"Hello World!";

  }
};
int main(){
    Myclass myobj; //create a object of my class (this will call the constructor )
    return 0;
}