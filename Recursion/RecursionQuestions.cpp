#include <iostream>
using namespace std;

void reachHome(int src , int dest){
    cout<<"src "<<src<<" dest "<<dest<<endl;
    if (src == dest){  // base cpnsition
        cout<<"reach"<<endl;
        return;
    }
     src++;  // proceesing
    reachHome(src , dest); // recursive call
}

int fab(int n){
    if (n == 0){ // base condition
     return 0;
    }
    if ( n == 1){  // base condition
        return  1;
    }
    return fab(n-1) + fab(n-2);  // recursive relation
    
}

void sayDigits(int n , string arr[]){
    if (n == 0){ // base condition
        return ;
    }

    int digit = n % 10; // processing
    n =  n / 10;

    
    sayDigits(n ,arr);  // recurcive relation
    
    cout<<arr[digit]<<" "; 
}

void reverse(string &name , int i , int j){
    cout<<name<<endl;
    if (i > j){  // base condition
        return;
    }

    int swap = name[i];  // processing
    name[i] = name[j];
    name[j] = swap;
 
    i++;
    j--;

    reverse(name , i , j); // recursive relation

}

bool checkPalindrome(string name , int i , int j){
    if (i>j){ // base Condition
        return true;
    }
    
    if (name[i] != name[j]){
        return false;
    }
    else{
        return checkPalindrome(name , i+1 , j-1); // Recursive Relation
    }
    
}
int main(){
// int src = 1;
// int dest = 10;

// reachHome(src, dest); // basic recursion question

// int n = 4;
// int ans = fab(n); // fabinacci series question
// cout<<ans<<endl;

// int s;
// cin>>s;

// string arr[10] = {
//     "zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"
// };

// sayDigits(s, arr);

// string personName = "sameer";

// reverse(personName , 0 , personName.length()-1);

// cout<<personName<<endl;

string personName2 = "non";

bool isPal = checkPalindrome(personName2 , 0 , personName2.length()-1);
 if (isPal){
    cout<<"It is palindrome"<<endl;
 }
 else{
cout<<"It is not palindrome"<<endl;
 }
 
}