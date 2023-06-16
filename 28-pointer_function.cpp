#include <iostream>
using namespace std;

void update(int *p){
    *p=*p+1;
}

int getSum(int arr[], int size){   //or int *arr,     // we are just passing array pointer, not whole array

    cout<<"size is : "<< sizeof(arr)<<endl;       // hence this will give the size of array pointer

    int sum=0;
    for(int i=0; i<size; i++){
        sum= sum + arr[i];
    }
    return sum;
}


int main(){

    int value=5;
    int *p = &value;

    cout<<"Before value: "<<*p<<endl;
    update(p);
    cout<<"After value: "<<*p<<endl;

    int arr[5]={1,2,3,4,5};

    cout<<"Sum is: "<<getSum(arr,5)<<endl;
    cout<<"Sum after 2 elements is: "<<getSum(arr+2,3)<<endl;

    return 0;
}