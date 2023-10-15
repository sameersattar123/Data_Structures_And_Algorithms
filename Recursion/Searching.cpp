#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1) // base condition
    {
        return true;
    }

    if (arr[0] > arr[1]){  // processing
        return false; 
    }
    else{
        return isSorted(arr + 1, size - 1); //recursive relation
    }
}

int getSum(int arr[] , int size){
    int sum = 0;
    if (size == 0){ // base condition
        return 0;
    } 
    if(size == 1){ // base condition
        return arr[0];
    };
    int remainingPart = getSum(arr + 1 ,   size - 1);
    int total = arr[0] + remainingPart;
    return total;
    
    
}

int main()
{
    // Question : 01
    int arr[5] = {1, 2, 53, 224, 2225};  
    int size = 5;
    bool ans = isSorted(arr, size);

    if (ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    
    // Question : 02
    int arr2[5] = {1,2,3,4,5};
    int size2 = 5;
    int total =  getSum(arr2 , size2);
    cout<<total<<endl;
}