#include <iostream>
using namespace std;

void sortArray(int arr[], int n){

    if(n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
              
            }
    }
    sortArray(arr,n-1);        
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
    sortArray(arr,6);
    printarray(arr,6);

return 0;

}