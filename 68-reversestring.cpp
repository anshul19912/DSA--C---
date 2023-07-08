#include <iostream>
#include <stack>
using namespace std;

int main(){
    string demo = "Anshul";
    stack<char> st;

    for(int i=0; i<demo.length(); i++){
        st.push(demo[i]);
    }

    string ans = "";

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
        st.
    }

    cout<<"Reverse is: "<<ans<<endl;

    return -1;
}