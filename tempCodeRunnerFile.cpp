#include <iostream>
#include <math.h>
using namespace std;

int findsetbits(int n){
int ans=0;
int i=0;
while(n!=0){
    int bit=n&1;
    ans=(bit*pow(10,i)) + ans;

    n= n>>1;
    i++;
}
    return ans;
}

int main(){
    // int n1,n2;
    // cin>>n1>>n2;
    cout<<findsetbits(6);
}