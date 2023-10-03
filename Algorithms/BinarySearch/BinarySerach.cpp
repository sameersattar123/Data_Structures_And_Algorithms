#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[6] = {2, 22, 23, 24, 25, 26};
    int brr[5] = {9, 22, 23, 24, 25};

    int evenIndex = binarySearch(arr, 6, 2);
    cout << "Index of 2 is " << evenIndex << endl;
    int oddIndex = binarySearch(brr, 5, 9);
    cout << "Index of 9 is " << oddIndex << endl;

    return 0;
}