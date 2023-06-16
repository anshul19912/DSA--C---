#include <iostream>
using namespace std;

int main(){

    int n=4;
    cout<<"Address of n is: "<<&n<<endl;
    cout<<"value of n is: "<<n<<endl;              

    int *ptr = &n; 
    /* or
    int *ptr = 0;
    ptr= &n;  */
    cout<<"Address of n is: "<<ptr<<endl;
    cout<<"value of n is: "<<*ptr<<endl;          // * is dereference operator

    int num=5;
    int *p = &num;
    cout<<" Before "<<num<<endl;
    (*p)++;
    cout<<"After "<<num<<endl;

    //copying a pointer
    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    //important concept
    int i=3;
    int *t = &i;

    *t=*t +1;
    cout<<*t<<endl;
    cout<<"Before t: "<<t<<endl;
    t=t+1;
    cout<<"after t: "<<t<<endl;


    return 0;
}