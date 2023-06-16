#include <iostream>
using namespace std;

int power(int a, int b){

    //base case
    if(b==0)
        return 1;

    if(b==1)
        return a;

    //recursive call
    int ans= power(a, b/2);

    //if b is odd
    if(b&1){
        return a*ans*ans;
    }
    //if b is even
    else 
        return ans*ans;
    
     
    
}


int main(){

   int a,b;
   cin>>a>>b;

   cout<<"Answer is: "<<power(a,b)<<endl;
   
    return 0;
}