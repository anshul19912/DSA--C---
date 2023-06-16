#include <iostream>
using namespace std;

int main(){
    
    int arr[5]={1,2,3,4,5};
    char ch[6]= "abcde";

    cout<<arr<<endl;      // will print adress of starting element of array

    cout<<ch<<endl;       // will print whole string

    char *c = &ch[0];
    cout<<c<<endl;         // will print whole string

    char temp='Z';
    char *p = &temp;
    cout<<p<<endl;

    return 0;
}