#include <iostream>
using namespace std;


void reverseArray(int arr[] , int n){
    int start = 0;
    int end = n-1;

    while (start <= end){
        int a = arr[start];
        arr[start] = arr[end];
        arr[end] = a;
        start++;
        end--;
    }
}

void printArray(int arr[] , int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {33,21,33,114,225,6};
    int brr[5] = {233,333,34,53,63};


    reverseArray(arr, 6);
    reverseArray(brr , 5);

    printArray(arr , 6);
    printArray(brr , 5);

}