// WAP for Removal of continuous duplicates in the string..

#include<iostream>
#include<string.h>
using namespace std;

void Removal(char input[]){
   int l = strlen(input);
   if(l==0||l==1)
    return;
   else if(input[0]==input[1]){
         for(int i=1;i<=l;i++)
            input[i-1]=input[i];
            
            Removal(input);
            }
    else
    Removal(input+1);
        
    }

int main(){
    
      char input[1000];
      cout<<"Enter the String Input"<<endl;
      cin>>input;
      Removal(input);
     cout << "String after removal of continuous duplicates: " << input << endl;

    
    
    
    return 0;

}