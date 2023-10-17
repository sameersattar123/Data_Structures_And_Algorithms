#include <iostream>
using namespace std;
int Partition(int arr[] , int s , int e){
    int pivot = arr[s];

    // Counting the elements which is less than pivot
    int count = 0;
    for (int i = s+1; i <= e; i++){
        if (arr[i] <= pivot){
            count++;
        }
    }

    // Place Pivot at right place
    int pivotIndex = s + count;
    int swap = arr[pivotIndex];
    arr[pivotIndex] = arr[s];
    arr[s] = swap;

    //  left ans right wala part 
    int i = s;  int j = e;
    while (i < pivotIndex && j > pivotIndex){
        while (arr[i] <= pivotIndex){
            i++;
        }
        while (arr[j] > pivotIndex){
            j--;
        }

        if (i < pivotIndex && j > pivotIndex){
            int swap = arr[i];
            arr[i]= arr[j];
            arr[j] = swap;
            i++;
            j--;
        }
        
    }
    
    return pivotIndex;
}
void quickSort(int arr[] , int s , int e){

    // Base Condition
    if (s >= e){
        return;
    }

    // Partition
    int p = Partition(arr, s, e);
    
    // left partition sort 
    quickSort(arr,s , p-1);

    // Right partition sort 
    quickSort(arr, p+1 , e);
}
int main(){
    int arr[6] = {2,33,1,32,22,3};
    int n = 6;
    quickSort(arr , 0 , n-1);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}