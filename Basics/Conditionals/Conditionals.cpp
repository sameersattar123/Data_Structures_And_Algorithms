#include<iostream>
using namespace std;

int main(){
    
    int a , b;
    cout<<"Enter the value of a"<< endl;
    cin>>a;
    cout<<"Enter the value of b"<< endl;
    cin>>b;

    if (a > b) {
        cout<< "A is greater";
    } else {
        cout<< "B is greater";
    }

    cout<< "Enter the value of c"<< endl;

    int c;
    cin>>c;

    if ( c > 0){
        cout<< "value of c is positive"<< endl;
    }else if(c<0) {
        cout<< "value of c is negative"<< endl;
    } else {
        cout<< "value of c is 0"<< endl;

    }
    
    cout<< "Enter the value of character"<< endl;
     char ch;
     cin>>ch;
    if ( ch >= 'A' && ch <= 'Z') {
        cout<< "value of c is Uppercase"<< endl;
    }
    else if (ch >= 'a' && ch <= 'z'){
        cout<< "value of c is Lowercase"<< endl;
    } else {
        cout<< "value of c is number"<< endl;
    }
    

}