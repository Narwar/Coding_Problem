// Second way-- Print the subsequences Without taking the output Array Try to Print directly
// ----(Humko Ab print krne h subsequesce bina other output array liyee)--------


#include<iostream>
using namespace std;

void subseq( string orginal, string tillnow){
   
   if(orginal.size()==0){
    cout<<tillnow<<endl;
    return;
   }
   
        subseq(orginal.substr(1), tillnow + orginal[0]); // inclued it  1st character ko le rhe h sur till now me apppend kr rhe
        subseq(orginal.substr(1), tillnow);// Not include it 1st character ko nhi le rhe tillnow jo phle the wahi rhega
}
int main(){
    string input;
    cout<<"Enter the Input String"<<endl;
    cin>>input;
    cout<<"[ ";
    subseq(input,"");
    cout<<"] "<<endl;

    return 0;

}