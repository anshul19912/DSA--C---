#include <iostream>
using namespace std;

long long int sqrtInteger(int n){
    int start=0;
        int end=n;
        int ans=-1;
        
        while(start<=end){
        long long int mid=start + (end-start)/2;     //or- (start+end)/2;

        if((mid*mid)==n){
           return mid;
        }

        else if((mid*mid)<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        } 
    }
    return ans;
}

double morePrecision(int n,int precision , int tempSol){

    double factor=1;
    double ans=tempSol;

    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
      int n;
      cout<<"Enter the number : "<<endl;
      cin>>n;

      int tempSol= sqrtInteger(n);
      cout<<"Answer is "<<morePrecision(n,3,tempSol);

      return 0;
}