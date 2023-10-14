#include <iostream>
using namespace std;

void updateValue(int **p){
    // p = p + 1; // No change

    // *p = *p + 1;  // address change
    
    **p = **p + 1;  // value change
}
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


    int m = 9;
    int *n = &m;
    int **s = &n;

    cout<<"Before "<<m<<endl;
    cout<<"Before "<<n<<endl;
    cout<<"Before "<<s<<endl;
    updateValue(s);
    cout<<"Before "<<m<<endl;
    cout<<"Before "<<n<<endl;
    cout<<"Before "<<s<<endl;
}