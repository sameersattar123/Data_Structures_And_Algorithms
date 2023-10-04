#include <iostream>
using namespace std;

int bubbleSort(int arr[] , int size){
    for (int i = 0; i < size-1; i++){
        for (int j = 0;  j < size-i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}


void printArray(int arr[] , int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
 int arr[6] = {3,14,25,6,7,8};

 bubbleSort(arr , 6);
 printArray(arr , 6);   
}