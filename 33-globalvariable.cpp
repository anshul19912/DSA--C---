#include <iostream>
using namespace std;

#define pi 3.14           // creating macros       

int score = 15;          //creating global variable

void a(){
    cout<<score<<" in a "<<endl;
    score--;                             // any function can modify global variable.
}
void b(){
    cout<<score<<" in b "<<endl;
}

int main(){

    int r=7;
    // pi--                           (macros cannot be modified)
    cout<<"Area of circle is: "<<pi*r*r<<endl;
    
    int i=5;
    
    cout<<score<<" in main "<<endl;

    a();
    b();


    return 0;
}