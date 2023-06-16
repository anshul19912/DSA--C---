#include <iostream>
using namespace std;

bool ispalindrome(string str, int i, int j){

    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    
    return ispalindrome(str, i+1, j-1); 
    
}


int main(){

    string name = "anku";
    int start= 0;
    int end= name.length()-1 ;

    
   if (ispalindrome(name,start,end))  {
            cout<<"Its a palindrome"<<endl;
   }
   
   else
   cout<<"It's not a palindrome";
   

    return 0;
    }