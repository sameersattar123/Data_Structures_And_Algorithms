#include <iostream>
using namespace std;

// convert uppercaase to lowercase
char toLowerCase(char ch){
    if (ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}
// check palindrome or not 
bool checkPalindrome(char arr[] , int n){
    int s = 0;
    int e = n-1;

    while (s <= e){
        if (toLowerCase(arr[s]) != toLowerCase(arr[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

//reverse the string
void reverse(char arr[] , int n){
    int s = 0;
    int e = n-1;
    while (s<=e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    
}

// calculate the lenght of string
int getLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char ch[20];
    cout<<"Enter your name"<<endl;
    cin>>ch;
    cout<<"Your name is ";
    cout<<ch<<" ";
    int len = getLength(ch);
    cout<<len<<endl;
    reverse(ch , len);
    cout<<ch<<" ";
    cout<<"Palindrome or not "<<checkPalindrome(ch ,len)<<endl;
}