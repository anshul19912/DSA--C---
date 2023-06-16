#include <iostream>
using namespace std;

int main(){

    int nrow,ncol;
    cin>>nrow>>ncol;


    int** arr= new int* [nrow];
    for(int i=0; i<nrow; i++){
        arr[i]= new int[ncol];
    }

    for(int row=0; row<nrow; row++){
        for(int col=0; col<ncol; col++){
            cin>>arr[row][col];
        }
    }   

    for(int row=0;row<nrow;row++){
        for(int col=0; col<ncol; col++){
            cout<<arr[row][col] << " ";
        }
        cout<<endl;
    }

    //releasing memory
    for(int i=0; i<nrow; i++){
        delete []arr[i];
    }

    delete []arr;


    return 0;
}
