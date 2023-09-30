#include <iostream>
using namespace std;

int main()
{
    // Question 1
    cout<<"Enter the value of N"<<endl;
    int n;
    cin >> n;
    int row = 1;
    while (row <= n){
        int col = 1;
        while (col <= n){
            cout<< "*  ";
            col = col + 1;
        }
            cout<<endl;
        row = row + 1;
    }

    // Question 2
    cout<<"Enter the value of N"<<endl;
    int n;
    cin >> n;
    int row = 1;
    while (row <= n){
        int col = 1;
        while (col <= n){
            cout<< row;
            col = col + 1;
        }
            cout<<endl;
        row = row + 1;
    }

    // Question 3
    cout<<"Enter the value of N"<<endl;
    int n;
    cin >> n;
    int row = 1;
    while (row <= n){
        int col = 1;
        while (col <= n){
            cout<< col;
            col = col + 1;
        }
            cout<<endl;
        row = row + 1;
    }

    // Question 4
    cout<<"Enter the value of N"<<endl;
    int n;
    cin >> n;
    int row = 1;
    while (row <= n){
        int col = 1;
        while (col <= n){
            cout<< n - col +1;
            col = col + 1;
        }
            cout<<endl;
        row = row + 1;
    }
}