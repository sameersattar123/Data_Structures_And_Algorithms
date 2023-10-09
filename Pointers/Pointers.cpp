#include <iostream>
using namespace std;

int main(){
    int num = 10000;
    cout<<"The value of num "<< num<<endl;
    cout<<"The address of num "<< &num<<endl;

    int *ptr = &num;

    cout<<"The address of num in ptr "<< ptr<<endl;
    cout<<"The value of ptr "<< *ptr<<endl;
}