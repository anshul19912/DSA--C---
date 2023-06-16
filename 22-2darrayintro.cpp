#include <iostream>
using namespace std;

  int main(){

    int arr[3][4];

    /* different ways to initialize array

        int [3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
        int arr[3][4]= { {1,11,111,111}, {2,22,222,222}, {3,33,333,3333}};
    
    */




//taking input row wise    
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }

/*  taking input col wise
    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
            cin>>arr[col][row];
        }
    }
*/
    for(int row=0;row<3;row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col] << " ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search: "<<endl;
    int n;
    cin>>n;

    //linear search
     for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]== n){
                cout<<"Index of element is: "<< row<<" "<<col<<endl;
                break;
            }
        }
    }  
     return 0;
  }