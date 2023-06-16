#include <iostream>
using namespace std;

 int sum=0;

int getsum(int arr[],int size){
   
    if(size==0)
        return sum;
    sum= sum + arr[0];    

    return getsum(arr +1, size-1);    

}

int main(){
     int arr[5]= {1,2,3,4,5};

     cout<<getsum(arr,5);

    return 0;
}