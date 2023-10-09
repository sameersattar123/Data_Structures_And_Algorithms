#include <iostream>
using namespace std;

int main()
{
    int num = 10000;
    cout << "The value of num " << num << endl; // print the value of num
    cout << "The address of num " << &num << endl; // print the address of num

    int *ptr = &num;

    cout << "The address of num in ptr " << ptr << endl; // only print the addrress of num which is assign to ptr
    cout << "The value of ptr " << *ptr << endl;         // only print the value of num which is assign to ptr

    double d = 4.44;

    cout << "The value of d " << d << endl; // print the value of d
    cout << "The address of d " << &d << endl; // print the address of d

    double *p = &d;

    cout << "The address of d in p " << p << endl; // only print the addrress of d which is assign to p
    cout << "The value of p " << *p << endl;         // only print the value of d which is assign to p
}