#include <iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){                //for round 1 to n
        int temp=arr[i];
        int j=i-1;

        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={12,45,32,25,78,64};

    printarray(arr,6);
    insertionsort(arr,6);
    printarray(arr,6);

return 0;

}

/*
Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.
Insertion sort works similarly as we sort cards in our hand in a card game.
We assume that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.

It iterates the input elements by growing the sorted array at each iteration. It compares the current element with the largest value in the sorted
 array. If the current element is greater, then it leaves the element in its place and moves on to the next element else it finds its correct 
 position in the sorted array and moves it to that position. This is done by shifting all the elements, which are larger than the current element, 
 in the sorted array to one position ahead
*/