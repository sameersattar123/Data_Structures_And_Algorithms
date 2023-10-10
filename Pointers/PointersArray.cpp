#include <iostream>
using namespace std;

int main(){

int arr[10] = {11,22,23,4,5,6,7,8,9,10};
cout<<arr[9]<<endl;
cout<<"the memory of first block "<<arr<<endl;
cout<<"the memory of first block "<<&arr[0]<<endl;
cout<<"the memory of first block "<<*arr<<endl;
cout<<"the memory of first block "<<*(arr+1)<<endl;
cout<<"the memory of first block "<<*(arr+2)<<endl;
cout<<"the memory of first block "<<*arr+2<<endl;
cout<<"the memory of first block "<<*arr+3<<endl;
cout<<"the memory of first block "<<*arr+4<<endl;
}