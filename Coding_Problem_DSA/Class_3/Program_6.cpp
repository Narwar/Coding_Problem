/* we solve this problem in 4 way from program 6 to 9

1. first way we take output array store the subsequeses in that array and print that Output array...PROGRAM_6
2. Second way we directly print the array wwithout taking another output  array....PROGRAM_7
3. third way we can solve this by working on their INDEXES .....PROGRAM_8
4. Fourth way We can solve this by talking VECTOR of string and push back our result of subsequesces of the int that VECTOR and return it...PROGRAM_9   */

// First Way--- Print The Subsequences of the given string

#include <iostream>
#include<string.h>
using namespace std;
   
  int  subseq(string input, string output[]){
    if(input.size()==0){
        output[0] ="";
        return 1;
         }
         
         int smallsize = subseq(input.substr(1),output);
         for(int i=0;i<smallsize;i++)
           output[i+smallsize]= input[0]+output[i];
        return 2*smallsize;
         
 }
int main(){ 
      string input;
      cout<<"enter the input string"<<endl;
      cin>>input;
      string *output = new string[100];
      int count = subseq(input,output);
      for(int i= 0;i<count;i++){
        cout<<output[i]<<endl;
      }


    return 0;
}