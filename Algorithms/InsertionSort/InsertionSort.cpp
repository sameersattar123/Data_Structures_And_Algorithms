#include <iostream>
using namespace std;

void insetionSort(int arr[] , int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i -1;
        for (; j >= 0; j--){
            if (arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
            
        }
        arr[j+1] = temp;
        
    }
    
}

void printArray(int arr[] , int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
  int arr[5] = {41,343,22,331,52};
    insetionSort(arr , 5);
    printArray(arr , 5);
}