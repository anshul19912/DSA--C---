#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    

    while(start<=end){
        int mid=start + (end-start)/2;     //or- (start+end)/2;

        if(arr[mid]==key){
            return mid;
        }

        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        } 
       
    }
    return -1;
}

int main(){ 
    int element;
    int arr[6]={2,4,6,8,12,18};

    cout<<"Enter the element you want index of "<<endl;
    cin>>element;
    cout<<binarySearch(arr,6,element);

    return 0;
}