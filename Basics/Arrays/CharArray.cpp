#include <iostream>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char ch[10];
    cout<<"Enter your name"<<endl;
    cin>>ch;
    cout<<"Your name is ";
    cout<<ch<<" ";
    cout<<getLength(ch);
}