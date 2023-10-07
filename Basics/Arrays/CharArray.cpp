#include <iostream>
using namespace std;

int main(){
    char ch[10];
    cout<<"Enter your name"<<endl;
    cin>>ch;
    ch[6] = '\0';
    cout<<"Your name is ";
    cout<<ch;
}