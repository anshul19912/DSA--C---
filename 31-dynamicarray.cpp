#include <iostream>
using namespace std;

int getSum(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum + arr[i];
    }
    return sum;
}

int main(){

    int n;
    cin >> n;

    //variable size array
    int* arr = new int[n];          // creating array in heap and storing it in pointer which is in stack
    // delete []arr;               to delete from heap memory 

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout<<"Answer is: "<<getSum(arr,n);



    return 0;
}