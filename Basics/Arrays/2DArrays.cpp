#include <iostream>
using namespace std;

int main(){
int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

// row wise 2d array
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

// col wise 2d array
for (int i = 0; i < 4; i++){
    for (int j = 0; j < 3; j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}

}