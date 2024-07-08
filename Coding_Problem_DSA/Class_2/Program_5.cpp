// WAP Replace a character in string with the another charater.. 


// //CODE For A particular string like x=shi here in question 
// #include <iostream>
// #include <string.h>
// using namespace std;


// void Replace(char input[]){
//    int len = strlen(input);
//    if(len==0)
//     return;
//    if(input[0]=='x'){
//     for(int i=len;i>0;i--)
//         input[i+2]= input[i];
//     input[0]='s';
//     input[1]='h';
//     input[2]='i';
//     Replace(input+3);
//    }
//    else{
//     Replace(input+1);
//    }
// }

// int main()
// {
//      char input[100];
//      cout<<"Enter a string "<<endl;
//      cin>>input;
//      Replace(input);
//      cout<<input<<endl;
    
 
//     return 0;
// }


// -----------Part 2------------- Lets Generalise this code---------

#include<iostream>
#include<string.h>
using namespace std;

 void Replace(char input[], char symbol, char str[]){
   int len1 =strlen(input);
   int len2= strlen(str);

   if(len1==0)  return;
   

   if(input[0]== symbol){
      for(int i=len1;i>=0;i--)
         input[i+len2-1]= input[i];// shift the orginal string 
      
      for(int i= 0;i<len2;i++)
         input[i]=str[i];   // Pusing the replace string in orginal string
      
      Replace(input+len2,symbol,str);
   }
   else
   Replace(input+1,symbol,str);
 }

int main(){
   
   char input[100];
   char str[100];
   char symbol;
   cout<<"Enter the string"<<endl;
   cin>>input;
   cout<<"Enter the Replace string"<<endl;
   cin>>str;
   cout<<"Enter Symbol "<<endl;
   cin>>symbol;
   Replace(input,symbol,str);
   cout<<input<<endl;
   
   
   return 0;

}
