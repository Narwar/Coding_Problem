//  Finf The sum of Arrary using recursion;

#include <iostream>
using namespace std;

int find_Sum(int arr[], int size){
      if(size==0){
       return 0;
      }

      else{
        return arr[0]+find_Sum(arr+1,size-1);
      }

}

int main(){
     int arr[]= {1,2,3,4,5};
      int size = sizeof(arr)/sizeof(int);
      int sum = find_Sum(arr,size);
      cout<<sum<<endl;
}