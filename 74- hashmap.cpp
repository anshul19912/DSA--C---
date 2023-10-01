#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

//data is printed in ordered manner in map but it is printed randomly in unordred_map

int main(){

                    // --creation
    unordered_map<string,int> m;

    //insertion
    //1
    pair<string,int> p = make_pair("babbar",3);
    m.insert(p);

    //2
    pair<string,int> p2("Love", 2);
    m.insert(p2);

    //3
    m["mera"]= 1;
    m["mera"]= 6;

                   // -- search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;

    cout<<m["unknownkey"]<<endl;            // there is no key with this name. hence it will create this entry with zero value


    cout<<m.size()<<endl;

                    // - to check presence of key
    cout<<m.count("Love") <<endl;

                    // erase
    m.erase("love"); 
    cout<<m.size()<<endl;               

                    // printing whole map
  for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}