#include <iostream>
using namespace std;

int fact(int n){

    if(n==0)                    //base case
        return 1;
    
    else{
        return n*fact(n-1);     //recursive relation
    }
}

int power(int n){

    if(n==0)                    //base case
        return 1;
    
    else{
        return 2 * power(n-1);
    }
}

void printcounting(int n){

    if(n==0)                    //base case
        return ;
    
    cout<<n<<endl;
    
    printcounting(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<"Factorial of "<<n<< " is: "<<fact(n)<<endl;

    cout<<"Power of "<<n<< " is: "<<power(n)<<endl;

    printcounting(n);


    
}