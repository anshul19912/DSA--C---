#include <iostream>
using namespace std;

    void merge(int arr[], int s, int e) {
        
       int mid= s + (e-s)/2;

       //size of two subarray to be merged
       int len1= mid-s+1;
       int len2= e-mid;

       //creating temp arrays
       int* first = new int[len1];
       int* second = new int[len2];

       //copying data to temp arrays
       int mainArrayIndex = s;
       for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
       }

        mainArrayIndex = mid+1;
       for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
       }

       //merge 2 sorted arrays
       int index1=0;
       int index2=0;
       mainArrayIndex= s;

       while(index1< len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
       }

        //copy remaining element of first array 
        while(index1<len1){
            arr[mainArrayIndex++] = first[index1++];
        }

        //copy remaining element of second array 
        while(index2<len2){
           arr[mainArrayIndex++] = second[index2++];
        }


        //our work of first and second array is done.. hence we can delete them
        delete []first;
        delete []second;
            
        
    }

    void mergeSort(int arr[], int s, int e){
        
        if(s>=e){
            return;
        }

        int mid= s+ (e-s)/2;

        //sort left part
        mergeSort(arr,s,mid);

        //sort right part
        mergeSort(arr, mid+1, e);

        //merge
        merge(arr,s,e);
    }

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[5]={18,45,23,9,20};
    int size=5;
    mergeSort(arr, 0, size-1);
    printArray(arr, size);

    return 0;


    }