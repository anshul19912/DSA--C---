#include <iostream>
using namespace std;

int main(){

    int arr[10]= {23,122,41,67,55};

    cout<<"address of element at 0th index: "<<&arr[0]<<endl;

    int *p= &arr[0];
    cout<<"Value of p: "<<*p<<endl;
    cout<<"Address of pointer p: "<<&p<<endl;


    int a[10];
 // a=a+1;          error- we cannot reassign address to an array
    int *ptr=&a[0];
    cout<<ptr<<endl;
    ptr++;                      // will move pointer to next block of array
    cout<<ptr<<endl;



    return 0;
}



//1- arr[i] = *(arr+i);
//2- arr[i] = i[arr];