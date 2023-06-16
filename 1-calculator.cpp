#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    char op;
    cout<<"Enter number 1"<<endl;
    cin>>n1;
    cout<<"Enter the operation (+,-,*,/)"<<endl;
    cin>>op;
    cout<<"Enter the number 2"<<endl;
    cin>>n2;

    switch(op){
        case '+': cout<<n1+n2<<endl;
                 break;
        case '-': cout<<n1-n2<<endl;
                 break;
        case '*': cout<<n1*n2<<endl;
                 break;
        case '/': cout<<n1/n2<<endl;
                 break;
        case '%': cout<<n1%n2<<endl;
                 break;
        default : cout<<"Please enter a valid opeartion"<<endl;
    }



    return 0;
}