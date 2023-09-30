#include <iostream>
using namespace std;

int main()
{
    // Print 1 to N numbers
    cout<< "Enter the value of Num"<<endl;
    int num;
    cin>> num;
    int initial = 1;
    while (initial <= num){
        cout<<initial;
        initial = initial + 1;
    }

    // Print sum of 1 to N numbers
     cout<< "Enter the value of Num"<<endl;
     int num;
     cin>> num;
     int sum = 0;
     int number = 1;
     while (number <= num){
         sum = sum + number;
         number = number + 1;
     }
     cout<<sum<<endl;

    // Print sum of even numbers of 1 to N numbers
    cout << "Enter the value of Num" << endl;
    int num;
    cin >> num;
    int sum = 0;
    int number = 2;
    while (number <= num)
    {
        sum = sum + number;
        number = number + 2;
    }
    cout << sum << endl;

    // Prime Number 
    cout<<"Enter the value of N"<<endl;
    int N;
    cin>>N;
    int num = 2;
    while (num < N){
        if (N % num == 0){
            cout<<"Not a Prime Number"<< num <<endl;
        } else {
            cout<<"Prime Number for "<< num <<endl;
        }
            num = num + 1;
    }
    
}