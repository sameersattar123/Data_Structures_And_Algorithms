#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0){ // base condition 
        return 1;
    }
    return n * factorial(n-1); // Recusrive Relation // return key word is complusory and calling function itself is complusory
    
}

int power(int n){
    if (n == 0){ // base condition 
        return 1;
    }
    return 2 * power(n-1);
}

int main(){
int n;
cout<<"Enter any number"<<endl;
cin>>n;

// int ans = factorial(n);
// cout<<ans<<endl;

int ans = power(n);
cout<<ans<<endl;
}