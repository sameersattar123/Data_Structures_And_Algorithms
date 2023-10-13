#include <iostream>
using namespace std;

void print(int *p){
    cout << *p  << endl;
    cout << *p + 1 << endl;
    cout << *p + 9 << endl;
}

int main(){
    int value = 6;
    int *p = &value;

    print(p);
}