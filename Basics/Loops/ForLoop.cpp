#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the Value of N"<<endl;
    int n;
    cin>> n;
    for (int i = 1; i<=n; i++){
        cout<<i<<endl;
    }

    // sum of all number
    cout<<"Enter the Value of N"<<endl;
    int n;
    cin>> n;
    int sum = 0;
    for (int i = 1; i<=n; i++){
        sum += i;
    }
    cout<<sum<<endl;

    // fabonacci series
     cout<<"Enter the Value of N"<<endl;
     int n;
     cin>> n;
     int a = 0;
     int b = 1;
     cout<< a << " " << b << " ";
     for (int i = 1; i <= n; i++){
         int nextNum = a + b;
         cout<<nextNum<< " ";
         a = b;
         b = nextNum;
     }

    // prime number
    cout << "Enter the Value of N" << endl;
    int n;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Not a Prime Number" << endl;
    }
    else
    {
        cout << "Prime Number" << endl;
    }
}