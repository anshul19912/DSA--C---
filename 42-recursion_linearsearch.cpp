#include <iostream>
using namespace std;

bool linearsearch(int arr[], int size, int element){

    if(arr[0]==element)
        return true;

    if(size==0)
        return false;
    

    return linearsearch(arr+1, size-1,element);     

}


int main(){

    int arr[5]= {1,2,4,8,32};

    cout<<linearsearch(arr,5, 32);


    return 0;
}