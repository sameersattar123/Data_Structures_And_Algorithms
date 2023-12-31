#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1) // base condition
    {
        return true;
    }

    if (arr[0] > arr[1])
    { // processing
        return false;
    }
    else
    {
        return isSorted(arr + 1, size - 1); // recursive relation
    }
}

int getSum(int arr[], int size)
{
    int sum = 0;
    if (size == 0)
    { // base condition
        return 0;
    }
    if (size == 1)
    { // base condition
        return arr[0];
    };
    int remainingPart = getSum(arr + 1, size - 1); // recursive relation
    int total = arr[0] + remainingPart;
    return total;
}

bool LinearSearch(int arr[], int size, int key)
{
    if (size == 0){ // base condition
        return false;
    }
    
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return LinearSearch(arr + 1, size - 1, key);  // recursive call
    }
}

bool BinarySearch(int arr[] , int s , int e , int key){
    if (s>e){  // Base Condition
        return false;
    }

    int mid = s + (e-s)/2;

    if (arr[mid] == key){  // Base Condition
        return true;
    }

    if (arr[mid] < key){
        return BinarySearch(arr , mid + 1 , e , key); // recursive relation
    }
    else {
        return BinarySearch(arr , s , mid - 1 , key);  // recursive relation
    }

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

    // linear search using recursion

    int arr[5]{1, 2, 3, 4, 5};
    int size = 5;
    int key = 1;
    bool search = LinearSearch(arr, size, key);
    if (search)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    // Binary Search using recursion

    int arr[5] = {1, 2, 3, 4, 5};
    int key = 1;

    cout << BinarySearch(arr, 0 ,4,key)<<endl;
}