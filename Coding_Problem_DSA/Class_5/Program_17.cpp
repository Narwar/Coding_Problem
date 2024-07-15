//  Letter Combinations of a Phone Number
// Link-: https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/i



#include<iostream>
using namespace std;

   void Generate(int index,string input,string output, string map[]){
        
        if(index == input.size()){
          cout<<output<<endl;
          return;
                  }
        int x= input[index]-'0';  // Extract kr liya 2 ko agr input 234 h tho ;
        string val= map[x];   // val==> string corresponding to symbol 2 ==>"abc";
            if(val.size()==0){
                Generate(index+1,input,output,map);
            }
            else{
                for(int i=0;i<val.size();i++){
                    Generate(index+1,input,output+val[i],map);
                }
            }
        


   }




int main(){
   string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   cout<<"Enter the input :"<<endl;
   string input;
   cin>>input;
   string output="";
   Generate(0,input,output,map);
   return 0;
};
