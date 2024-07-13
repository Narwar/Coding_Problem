// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
//  Yhaa hum Return karwa rhe h

#include<iostream>
#include<vector>
using namespace std;
 
 void Generate(string abtk,int open ,int close, vector<string> &v){
    
    if(open==0 &&close==0){
        v.push_back(abtk);
        return;
    }
    if(open>0){
        Generate(abtk +"(",open-1,close,v);
    }
    if(close>0&& open<close){
        Generate(abtk+")", open,close-1,v);
    }



 }
int main(){
     int n;
     vector<string> v;
     cout<<"Enter a number "<<endl;
     cin>>n;
     Generate("",n,n,v);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}