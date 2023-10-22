#include <iostream>
using namespace std;

class Human{
    public:
    int age;
    string name;

    void setAge(int age){
        this->age = age;
    }
    void setName(string name){
        this->name = name;
    }

      void sleep1(){
        cout<<"I am sleeping1"<<endl;
    }
};

class Male: public Human{ // Single Inheritancce
    public:
    string color;
    void sleep2(){
        cout<<"I am sleeping2"<<endl;
    }

     void setColor(string color){
        this->color = color;
    }
};
class Female: public Male{ // Multi-level Inheritance : female inheritant male and male inheritant human , this type if inheritance is called Multi level Inheritance
    public:
    void sleep3(){
        cout<<"I am sleeping3"<<endl;
    }

};

class Student: public Male , public Female{ // Multiple Inheritance
    public:
    void Name(){
        cout<<"My name is student"<<endl;
    }
};

class A {
    public:
    void func(){
        cout<<"Function of A"<<endl;
    }
};
class B {
    public:
    void func(){
        cout<<"Function of B"<<endl;
    }
};

class C: public A , public B {
    
};

int main(){
  Male sameer;
  sameer.setAge(34);  
  sameer.setName("sameer sattar");
  sameer.setColor("green");
  cout<<sameer.age<<endl;  
  cout<<sameer.name<<endl;
  cout<<sameer.color<<endl;
  sameer.sleep1(); // calling object by single inheritance 
  sameer.sleep2();  

  Female sameera;
  sameera.sleep1(); // Multi level Inheritance
  sameera.sleep2(); // Multi level Inheritance 
  sameera.sleep3();

  Student shabana;
  shabana.sleep3(); // Multiple Inheritance
  shabana.Name(); // Multiple Inheritance

  C category;
  category.A::func();  // inheritance Ambiguity : same fucntion in different classes
  category.B::func();  // inheritance Ambiguity : same fucntion in different classes
}