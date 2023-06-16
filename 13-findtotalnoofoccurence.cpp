#include <iostream>
using namespace std;

int firstoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    

    while(start<=end){
        int mid=start + (end-start)/2;     //or- (start+end)/2;

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }

        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        } 
       
    }
    return ans;
}

int lastoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    

    while(start<=end){
        int mid=start + (end-start)/2;     //or- (start+end)/2;

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }

        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        } 
       
    }
    return ans;
}

int main(){ 
    int element;
    int arr[7]={1,2,3,3,3,3,5};
    int totaloccurence= lastoccurence(arr,7,3) - firstoccurence(arr,7,3) +1; 
    cout<<"Total number of occurence of 3: "<<totaloccurence ;
    
    return 0;
}