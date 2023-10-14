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
    return 2 * power(n-1); // recursive relation
}

void counting1(int n){
    if (n == 0){ // base condition
        return;
    }
    counting1(n-1); // recursive relation

    cout<<n<<endl; // processing
}

void counting2(int n){
    if (n == 0){ // base condition
        return;
    }
    cout<<n<<endl; // processing

    counting2(n-1); // recursive relation
}

int main(){
int n;
cout<<"Enter any number"<<endl;
cin>>n;

int ans = factorial(n);
cout<<ans<<endl;

int ans = power(n);
cout<<ans<<endl;

counting1(n);

counting2(n);

}