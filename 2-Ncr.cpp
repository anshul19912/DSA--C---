#include <iostream>
using namespace std;

int findfactorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int nCr(int n, int r){
    int ans = findfactorial(n) / ( findfactorial(r)*(findfactorial(n-r)) );
    return ans;
    }

int main(){
    int n, r;
    cout<<"Enter the value of n and r"<<endl;
    cin>>n>>r;
    cout<<"Answer is "<<nCr(n,r);
    return 0;
}