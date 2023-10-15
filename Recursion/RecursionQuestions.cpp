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
int main(){
int src = 1;
int dest = 10;

reachHome(src, dest); // basic recursion question

int n = 4;
int ans = fab(n); // fabinacci series question
cout<<ans<<endl;

int s;
cin>>s;

string arr[10] = {
    "zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"
};

sayDigits(s, arr);




}