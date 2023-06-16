#include <iostream>
using namespace std;

void swap(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
            }
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[6]={1,4,0,5,-2,15};

    swap(arr,6);
    printArray(arr,6);
    return 0;
}