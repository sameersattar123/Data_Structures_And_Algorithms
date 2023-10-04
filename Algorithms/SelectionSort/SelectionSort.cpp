#include <iostream>
using namespace std;

int selectionSort(int arr[] , int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < n ; j++){
               if(arr[j] < arr[minIndex]){
                minIndex = j;
               } 
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    
}

void printArray(int arr[] , int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {411,33,22,331,52};
    selectionSort(arr , 5);
    printArray(arr , 5);
}