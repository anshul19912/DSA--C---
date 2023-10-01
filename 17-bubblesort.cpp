#include <iostream>
using namespace std;


void bubblesort(int arr[],int n){
     bool swapped=false;
    for(int i=1;i<n-1;i++){              // for round 1 to n-1
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
         if(swapped==false){
           //already sorted
           break;
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
    bubblesort(arr,6);
    printarray(arr,6);

return 0;

}


/*

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order

traverse from left and compare adjacent elements and the higher one is placed at right side. 
In this way, the largest element is moved to the rightmost end at first. 
This process is then continued to find the second largest and place it and so on until the data is sorted.


*/