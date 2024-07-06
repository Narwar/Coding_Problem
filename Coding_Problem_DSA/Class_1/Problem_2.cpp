// Given an Array find Wheather it is Ascend sorted or not using recursion

#include <iostream>
using namespace std;

bool Array_sorted(int arr[],int size){

    if(size==0||size==1)
    return true;    
    else if(arr[0]>arr[1]){
        return false;
    }
    else return Array_sorted(arr+1,size-1);
}

int main(){
     int arr[] ={1,2,3,5,4};
     
     int size= sizeof(arr)/sizeof(int);
     int value = Array_sorted(arr,size);
     if(value){
        cout<<"Array is sorted";
         }
         else
         {
            cout<<"Array is not sorted";
         }


}