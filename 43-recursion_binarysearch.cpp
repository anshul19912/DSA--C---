#include <iostream>
using namespace std;

int binarysearch(int arr[], int start, int end, int element){

        int mid= start + (end-start)/2;

        if(start>end){
            cout<<"Element not found "<<endl;
            return 0;
        }

        if(arr[mid]== element)
                return mid;

        if(arr[mid] < element)   
                return binarysearch(arr, mid +1, end, element);      

       return binarysearch(arr, start, mid-1, element); 
}


int main(){

    int arr[5]= {1,2,4,8,32};
    int start=0;
    int end= sizeof(arr)/sizeof(int) -1 ;
    cout<<binarysearch(arr,start, end, 32);


    return 0;
    }