#include <iostream>
using namespace std;

int main(){
    string name= "Anshul Singh";

    int length=0;
    for(int i=0; name[i]!='\0'; i++){
        length++;
    }

    cout<<"length of string = "<<length;

    return 0;
}