#include <iostream>
using namespace std;

class Hero {

    private:
    string name;

    public:
    int health;
    char grade;

    string getName(){
        return name;
    }
    int getHealth(){
        return health;
    }
    char getGrade(){
        return grade;
    }

    void setName(string n){
        name = n;
    };
    void setHealth(int h){
        health = h;
    };
    void setGrade(char g){
        grade = g;
    };
};
int main(){
  Hero person;
  person.setHealth(34);
  person.setGrade('A');
  person.setName("sameer");
  cout<<person.getName()<<endl;
  cout<<person.getHealth()<<endl; 
  cout<<person.getGrade()<<endl;  
}