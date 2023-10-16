#include <iostream>
using namespace std;

void  merge(int *arr ,  int  s , int e){

    // Taking Mid 
    int mid = (e+s)/2;

    // lenght 1
    int len1 = mid - s + 1; 
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];


    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex++]; 
    }
    // copy values
     mainArrayIndex = mid+1;
    for (int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++]; 
    }

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2){
        if (first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
        
    }
    while (index1< len1){
           arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

}
void mergeSort(int *arr , int s ,  int e){
    // Base Condition
    if (s >= e){
        return;
    }

    // Taking Mid 
    int mid = (e+s)/2;

    // Merge left hand side of array
    mergeSort(arr , s , mid);

    // Merge Right hand side of array
    mergeSort(arr , mid + 1, e);
    
    // Merge
    merge(arr , s , e);
}

int main(){
    int arr[6] = {33,44,25,62,111,22};
    int n = 6;
    mergeSort(arr , 0 , n-1);

    for (int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}