#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int size;
    cin>>size;
    
    int arr[10];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter the number you want to search in array "<<endl;
    int key;
    cin>>key;

    if(search(arr,size,key)){
        cout<<"Element is present in array"<<endl;
    }
    else{
        cout<<"element is not present in array"<<endl;
    }

    return 0;
}