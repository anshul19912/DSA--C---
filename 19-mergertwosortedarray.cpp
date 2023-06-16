#include <iostream>
using namespace std;

    void merge(int nums1[], int n, int nums2[], int m, int nums3[]) {
        
        int i=0,j=0;
        int k=0;

        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                nums3[k]=nums1[i];
                i++;
                k++;
            }
            else{
                nums3[k]=nums2[j];
                j++;
                k++;
            }
        }


        //copy remaining element of first array 
        while(i<n){
            nums3[k]=nums1[i];
            k++;
            i++;
        }

        //copy remaining element of second array 
        while(j<m){
            nums3[k]=nums2[j];
            k++;
            j++;
        }
            
        
    }

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6};

    int arr3[8]={0};

    merge(arr1,5,arr2,3,arr3);
    printArray(arr3,8);

    return 0;


    }