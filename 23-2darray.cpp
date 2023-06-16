#include <iostream>
using namespace std;

void printsum(int arr[][2],int rows,int cols){
    
     for(int row=0;row<rows;row++){
        int sum=0;
        for(int col=0; col<cols; col++){
            sum= sum+ arr[row][col];
        }
        cout<<sum<<endl;
        
}
}

int largestRowSum(int arr[][2],int rows,int cols){
    int max;
    int rownum;
  for(int row=0;row<rows;row++){
        int sum=0;
        for(int col=0; col<cols; col++){
            sum= sum+ arr[row][col];
        }
        if(sum>max){
            max=sum;
            rownum=row;
        }
    }    
    cout<<"The maximum sum is "<<max<<endl;
    return rownum;
}

int main(){
     int arr[2][2];

    for(int row=0; row<2; row++){
        for(int col=0; col<2; col++){
            cin>>arr[row][col];
        }
    }

    cout<<"Printing array"<<endl;
    for(int row=0;row<2;row++){
        for(int col=0; col<2; col++){
            cout<<arr[row][col] << " ";
        }
        cout<<endl;
    }

    printsum(arr,2,2);

    cout<<"The max sum is at index "<<largestRowSum(arr,2,2);

    return 0;
}