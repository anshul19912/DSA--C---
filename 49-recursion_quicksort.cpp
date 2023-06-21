#include <iostream>
using namespace std;

    int partition(int arr[], int s, int e){

        int pivot = arr[s];

        int cnt=0;
        for(int i=s+1; i<=e; i++){     // finding element smaller than pivot
            if(arr[i] <= pivot){
                cnt++;
            }
        }
        
        //place the pivot at right positino
        int pivotIndex = s + cnt;
        swap(arr[pivotIndex], arr[s] );

        //left and right wala part sambhal lete hain
        int i=s, j=e;

        while(i < pivotIndex && j>pivotIndex){

           while(arr[i] <= pivot){
            i++;
           }
           while(arr[j] > pivot){
            j--;
           }

            if(i < pivotIndex && j>pivotIndex){
                swap(arr[i++], arr[j--]);
           }
           
        }

            return pivotIndex;

    }

    void quicksort(int arr[], int s, int e) {

        //base case
        if(s>=e){
            return;
        }

        //partition karenge
        int p = partition(arr, s, e);

        //left part sort karo
        quicksort(arr, s, p-1);
        
        //right part sort karo
        quicksort(arr, p+1, e);


    }
        
     
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[7]={47,124,23,9,20,78,995};
    int size=7;
    quicksort(arr, 0, size-1);
    printArray(arr, size);

    return 0;


    }