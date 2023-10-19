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
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"I am sleeping"<<endl;
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
  sameer.sleep();  
}