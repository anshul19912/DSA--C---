#include <iostream>
using namespace std;

void print(int arr[], int n, int start =0 ){                // now start is optional , now its not compulsary to give value of start while calling this func      (yh hamesha rightmost parameter se chalega)

    for(int i= start ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

    int arr[5]= {1,4,7,8,9};
    print(arr,5);



}