#include <iostream>
using namespace std;

void print(int *p){
    cout << *p  << endl;
    cout << *p + 1 << endl;
    cout << *p + 9 << endl;
}
int getSum(int *arr , int size){
    cout<< sizeof(arr)<< endl;
    int sum = 0;
    for (int i = 0; i <= size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int value = 6;
    int *p = &value;

    // print(p);

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<< getSum(arr, 10)<<endl;
}