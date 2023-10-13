#include <iostream>
using namespace std;

int main(){
    int i = 10;
    int *p1 = &i;
    int **p2 = &p1; 
    int ***p3 = &p2;

    cout << i << endl; // 10
    cout << *p1 << endl; // 10
    cout << **p2 << endl; // 10
    cout << ***p3 << endl; // 10

    cout<< &i <<endl; // 0x61ff08
    cout<< p1 <<endl; // 0x61ff08
    cout<< *p2 <<endl; // 0x61ff08
    cout<< **p3 <<endl; // 0x61ff08

    cout << &p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
}