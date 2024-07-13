//  Return all the subset eg known as power set[1,2,3]

#include<iostream>
#include<vector>
using namespace std;


void Power(int index,int n,int arr[],vector<int> curr,vector<vector<int>> &ans){

    if(index==n){
        ans.push_back(curr);
        return;
    }
    Power(index+1,n,arr,curr,ans); // Dont include here   
    curr.push_back(arr[index])  ;   // Include kaa logic
    Power(index+1,n,arr,curr,ans); // After Including;
}

int main(){
    int n;
    cout<<"Enter the value of N :-"<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the element of the array"<<endl;
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> curr;
    vector<vector<int>>ans;
    Power(0,n,arr,curr,ans);

    for(auto vec :ans){
        for(auto ele :vec){
            cout<<ele<<" ";
        } cout<<endl;

    }
  return 0;
}