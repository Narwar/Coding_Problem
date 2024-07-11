// Fourth way-- Print all the subsequesces now taking the vector and push back the result and return it...
// (vector of string ki  help RETURN  krege)
// *IMPORTANT* point yaha vector By REFERENCE hoga tabhi value store hogi array me....


#include<iostream>
#include<vector>

using namespace std;

void subseq( int index,string orginal,string tillnow, vector<string> &v){
    
    if(index==orginal.size()){
        v.push_back(tillnow);// Yha hume vector ke ander ander daal diya
        return;
    }
    subseq(index+1,orginal,tillnow+orginal[index],v); //yaha hum include kr rhe h  aur till now sting me add kr rhe h..
    subseq(index+1,orginal,tillnow,v); // yaha hum index wale element ko use nhi kr rhe aur till now me kuch add nhi kr rhe...
}

int main(){
    string input;
    vector<string> v;
    cout<<"Enter the Input String"<<endl;
    cin>>input;
    subseq(0,input,"", v );
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}
