#include <iostream>
using namespace std;

class Hero
{

private:
    string name; // to access private acces modifier , we used getter and setter

public:
    int health;
    char grade;

    string getName()
    { // getter
        return name;
    }
    int getHealth()
    { // getter
        return health;
    }
    char getGrade()
    { // getter
        return grade;
    }

    void setName(string n)
    { // setter
        name = n;
    };
    void setHealth(int h)
    { // setter
        health = h;
    };
    void setGrade(char g)
    { // setter
        grade = g;
    };
    Hero(int health, char grade, string name)
    { // paramatric Contructor
        cout << "level , grade , name Constructor" << endl;
        this->grade = grade;
        this->health = health;
        this->name = name;
    }
    Hero(char grade, string name)
    { // paramatric Contructor
        cout << "grade and name Constructor" << endl;
        this->grade = grade;
        this->name = name;
    }
    Hero(string name)
    { // paramatric Contructor
        cout << "name Constructor" << endl;
        this->name = name;
    }
    Hero()
    { // paramatric Contructor
        cout << "Default Constructor" << endl;
    }

    void print()
    {
        cout << "print " << name << endl;
    }
};
int main()
{
    // Static Allocation
    Hero person;
    //   Hero person("sameer"); // paramatric Contructor
    //   Hero person('B' , "sameer"); // paramatric Contructor
    //   Hero person( 78 , 'S' , "sameer" ); // paramatric Contructor

    // Access Person using Static Allocation
    person.setHealth(34);
    person.setGrade('A');
    person.setName("sameera");
    cout << person.getName() << endl;
    cout << person.getHealth() << endl;
    cout << person.getGrade() << endl;

    Hero CopyPerson(person); // Copy Constructor
    CopyPerson.print();      // print || same values as person

    // Dynamic Allocation
    Hero *Person = new Hero;
    //   Hero *Person = new Hero("sameeer"); // paramatric Contructor
    //   Hero *Person = new Hero('S' , "sameer"); // paramatric Contructor
    //   Hero *Person = new Hero(98 , 'B' , "ali");  // paramatric Contructor
    Person->print();

    // Access Person using Dynamics Allocation
    Person->setHealth(344);
    Person->setGrade('B');
    Person->setName("sameera");
    cout << Person->getName() << endl;
    cout << Person->getHealth() << endl;
    cout << Person->getGrade() << endl;
}