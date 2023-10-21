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
}