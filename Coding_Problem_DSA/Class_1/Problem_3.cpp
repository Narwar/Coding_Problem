// Given an Array reverse the content of the array using the recursion

#include <iostream>
using namespace std;

void ReverseFunction(int arr[],int size){
int temp=0;
    if(size==0||size==1){
        return;
    }
    else 
    // Swapping code;
    temp = arr[0];
    arr[0]= arr[size-1];
    arr[size-1]= temp;
    return ReverseFunction(arr+1,size-2);
}



int main(){
    int arr[]= {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    ReverseFunction(arr, size);
    //  Printing the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<", ";
    }

}