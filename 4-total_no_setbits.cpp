#include <iostream>
#include <math.h>
using namespace std;

int findsetbits(int n){
int sum=0;
while(n!=0){
    int bit=n&1;
    if(bit==1){
        sum=sum+1;
    }
    n= n>>1;
    
}
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<findsetbits(n);
}