// Print all the subset Eg [1,2,3]

#include<iostream>
#include<vector>
using namespace std;

void Power(int index,int n,int arr[],int abtk[], int abtk_size){
 if(index==n){
    for(int i=0;i<abtk_size;i++){
        cout<<abtk[i]<<" ";
    }
    cout<<endl;
    return;
 }
     Power(index+1,n,arr,abtk,abtk_size);
     abtk[abtk_size]= arr[index];
     Power(index+1,n,arr,abtk,abtk_size+1);
}

int main(){

    int n;
    cout<<"Enter a Input and valu of n"<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the Element of array;"<<endl; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      int *abtk = new int[n];
    Power(0,n,arr,abtk,0);
    return 0;
}