#include <iostream>
using namespace std;

bool search(int arr[] , int key , int size){
    for (int i = 0; i <= size; i++){
        if (arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    // linear Search
    int arr[10] = {0,12,3,4,566,77,88,99,22,3};
    
    cout<<"Enter the value of Key"<<endl;
    int key;
    cin>>key;

    bool found = search(arr , key , 10);
    if (found){
        cout<<"key is present"<<endl;
    }else{
        cout<<"key is not present"<<endl;
    }
    

}