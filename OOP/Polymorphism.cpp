#include <iostream>
using namespace std;

// Static Polymorphism (Complie Time Polymorphism)
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

// Dynamic Polymorphism (Run Time Polymorphism)

class Animal {
    public:
    void speak(){   // method overriding
        cout<<"speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){  // method overriding
        cout<<"Bracking"<<endl;
    }
};

int main(){
  A obj;
  obj.sayHello();   // overloading
  obj.sayHello("sameer"); // overloading  
  obj.sayHello('r');  // overloading

  Dog d;
  d.speak(); //  // method overriding
}