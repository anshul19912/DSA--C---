#include <iostream>
using namespace std;

void reachHome(int src, int des){

    cout<<"Source "<<src<<" destination "<<des<<endl;
    if(src==des){                         
        cout<<"Pauch gya "<<endl;
        return ;
    }

    //processing
    src++;

    return reachHome(src,des);


}


int main(){

    int des=10;
    int src=1;

    reachHome(src,des);

    return 0;
}