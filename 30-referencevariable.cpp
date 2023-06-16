#include <iostream>
using namespace std;

void update2(int& n){                // pass by reference
    n++;
}

void update1(int n){                // pass by value
    n++;
}

int main(){

  int i=5;

  //create ref variable
  int& j=i;

  cout<<i<<endl;
  j++;
  cout<<i<<endl;
  cout<<j<<endl;

  int n=5;
  cout<<"Before "<<n<<endl;
  update1(n);
  cout<<"After "<<n<<endl;

  int m=6;
  cout<<"Before "<<m<<endl;
  update2(m);
  cout<<"After "<<m<<endl;
  
    

  return 0;


}