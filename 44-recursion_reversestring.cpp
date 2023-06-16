#include <iostream>
using namespace std;

void reverse(string& str, int i, int j){

    if(i>j)
        return;

    swap(str[i],str[j]);
    i++;
    j--;

    return reverse(str, i, j); 
}


int main(){

    string name = "Anshul";
    int start= 0;
    int end= name.length()-1 ;
    
    reverse(name,start,end);

    cout<<name;

    return 0;
    }