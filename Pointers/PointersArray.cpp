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

// difference between array and pointers
int temp[10] = {1,2};
cout<< sizeof(temp)<<endl; // 40   no of block in array x 10;
int *t = &temp[0];
cout<< sizeof(t)<<endl; // 4  // single element 

}