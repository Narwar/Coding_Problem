// Third way-- Print the subsequences of the string again now taking index---
// (Ab hum yaha indexes pe kam krege)

#include <iostream>
using namespace std;

void subseq(int index, string orginal,string tillnow){

    if(index==orginal.size()){
        cout<<tillnow<<endl;
        return;
    }
    subseq(index+1,orginal,tillnow+orginal[index]); //yaha hum include kr rhe h  aur till now sting me add kr rhe h..
    subseq(index+1,orginal,tillnow); // yaha hum index wale element ko use nhi kr rhe aur till now me kuch add nhi kr rhe...
}

int main(){
    string input;
    cout<<"Enter  the string "<<endl;
    cin>>input;
    cout<<"[ ";
    subseq(0,input,"");  // Index add kr diye....
    cout<<"] "<<endl;
    return 0;
}