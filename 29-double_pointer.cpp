#include <iostream>
using namespace std;

void update(int** p2){
    // p2= p2 + 1;              // no change bcoz only the adress of p2 wil change

    *p2= *p2+1;               // will change the value of p

    // **p2 = **p2 +1;        //will change the value of i

}

int main(){

    int i=5;
    int* p= &i;
    int** p2= &p;

    cout<<"printing p "<<p<<endl;
    cout<<"printing address of p "<<&p<<endl;

    cout<<"printing p2 "<<p2<<endl;
    cout<<*p2<<endl;
    cout<<"printing address of p2 "<<&p2<<endl;


    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<endl<<endl;
    cout<<"Before: "<<i<<endl;
    cout<<"Before: "<<p<<endl;
    cout<<"Before: "<<p2<<endl;
    update(p2);
    cout<<"after: "<<i<<endl;
    cout<<"after: "<<p<<endl;
    cout<<"after: "<<p2<<endl;
    return 0;
}