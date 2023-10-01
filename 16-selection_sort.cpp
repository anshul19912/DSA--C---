#include <iostream>
using namespace std;


void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={12,45,32,25,78,64};

    printarray(arr,6);
    selectionsort(arr,6);
    printarray(arr,6);

return 0;

}



/*
Selection sort works by taking the smallest element in an unsorted array and bringing it to the front. 
You'll go through each item (from left to right) until you find the smallest one. The first item in the array is now sorted, 
while the rest of the array is unsorted.

*/