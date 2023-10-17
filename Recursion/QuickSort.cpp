#include <iostream>
using namespace std;
int Partition(int arr[] , int s , int e){

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
    for (int i = 0; i <= n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}