#include <iostream>
using namespace std;

class Hero {

    private:
    string name;  // to access private acces modifier , we used getter and setter

    public:
    int health;
    char grade;

    string getName(){  // getter
        return name;
    }
    int getHealth(){ // getter
        return health;
    }
    char getGrade(){ // getter
        return grade;
    }

    void setName(string n){ // setter
        name = n;
    };
    void setHealth(int h){ // setter
        health = h;
    };
    void setGrade(char g){ // setter
        grade = g;
    };
};
int main(){
  // Static Allocation
  Hero person;

  // Access Person using Static Allocation 
  person.setHealth(34);
  person.setGrade('A');
  person.setName("sameer");
  cout<<person.getName()<<endl;
  cout<<person.getHealth()<<endl; 
  cout<<person.getGrade()<<endl;

  // Dynamic Allocation
  Hero *Person = new Hero;

 // Access Person using Dynamics Allocation
  Person->setHealth(344);
  Person->setGrade('B');
  Person->setName("sameera");
  cout<<Person->getName()<<endl;
  cout<<Person->getHealth()<<endl; 
  cout<<Person->getGrade()<<endl;
}