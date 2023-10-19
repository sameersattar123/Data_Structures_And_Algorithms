#include <iostream>
using namespace std;

class Student{

    private:
    string name;
    int age;
    int height;

    public:
        string getName(){ // getter
        return name;
    }
    int getHeight(){ // getter
        return height;
    }
    int getAge(){ // getter
        return age;
    }

    void setName(string n){ // setter
        name = n;
    };
    void setHeight(int h){ // setter
        height = h;
    };
    void setAge(char g){ // setter
        age = g;
    };

};

int main(){
    // Data Hiding is called Encapsulation in which we get data members and different fucntions

    Student sameer;
    sameer.setAge(22);
    sameer.setHeight(5);
    sameer.setName("sameeer sattar ");
    cout<<sameer.getAge()<<endl;
    cout<<sameer.getHeight()<<endl;
    cout<<sameer.getName()<<endl;
}