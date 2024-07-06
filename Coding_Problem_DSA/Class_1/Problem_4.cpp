// Remove a Particular Character from the String


#include <iostream>
#include<string.h>

using namespace std;
 
 void Replace(char str[]){
    int l= strlen(str);
    if(l==0){
       return;
    }
    if(str[0]=='x'){
      for(int i=0;i<l;i++){
        str[i]=str[i+1];
        Replace(str);
      }
    }
    else Replace(str+1);

 }



int main(){
     char str[1000];
    cout<<"Enter The string"<<" ";
    cin>>str;
    Replace(str);
    cout<<str<<endl;

    return 0;





}