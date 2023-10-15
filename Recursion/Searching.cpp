#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr + 1, size - 1);
    }
}

int main()
{
    int arr[5] = {1, 2, 53, 224, 2225};
    int size = 5;
    bool ans = isSorted(arr, size);

    if (ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    
}