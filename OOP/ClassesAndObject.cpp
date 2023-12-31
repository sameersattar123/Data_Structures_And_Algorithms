#include <iostream>
using namespace std;

class Hero{

private:
    string name; // to access private acces modifier , we used getter and setter

public:
    int health;
    char grade;

    string getName(){ // getter
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
    Hero(int health, char grade, string name){ // paramatric Contructor
        cout << "level , grade , name Constructor" << endl;
        this->grade = grade;
        this->health = health;
        this->name = name;
    }
    Hero(char grade, string name){ // paramatric Contructor
        cout << "grade and name Constructor" << endl;
        this->grade = grade;
        this->name = name;
    }
    Hero(string name){ // paramatric Contructor
        cout << "name Constructor" << endl;
        this->name = name;
    }
    Hero(){ // without paramatric Contructor
        cout << "Default Constructor" << endl;
    }

    ~Hero(){ // Destructor Contructor
        cout << "Destructor Constructor" << endl;
    }

    Hero(Hero& temp){  // Copy Constructor
        cout << "Copy Constructor" << endl;
    }

    void print(){
        cout << "print " << name << endl;
    }
};

class StaticHero{ // Concept of Static keyword
    public:
    static string Name;  // static name
    static int age;  // static age

    static string StaticPersonName(){ // static function
        cout<< Name << endl; // static name
    } 
    static int StaticPersonAge(){ // static function
        cout<< age << endl; // static age
    } 
};

string StaticHero::Name = "sameeeeeer";
int StaticHero::age = 222;

int main(){

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
    CopyPerson.print(); 

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

    delete Person; // for calling destructor 

    // Access Static varibles 
    cout<<"s"<<endl;
    cout<<StaticHero::Name<<endl;
    cout<<"s"<<endl;
    cout<<StaticHero::age<<endl;

    // Access Static Function
    cout<<"s"<<endl;
    cout<<StaticHero::StaticPersonAge()<<endl;
    cout<<"s"<<endl;
    cout<<StaticHero::StaticPersonName()<<endl;
}