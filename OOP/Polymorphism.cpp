#include <iostream>
using namespace std;

class A {
    public:
    void sayHello(){ // overloading
        cout<<"hello"<<endl;
    }
    void sayHello(string name){ // overloading
        cout<<"hello " + name<<endl;
    }
    void sayHello(char name){ // overloading
        cout<<"hello "<< name<<endl;
    }
};

int main(){
  A obj;
  obj.sayHello();   // overloading
  obj.sayHello("sameer"); // overloading  
  obj.sayHello('r');  // overloading
}