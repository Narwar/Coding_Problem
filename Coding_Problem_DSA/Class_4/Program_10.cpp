//  Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 
 #include<iostream>
 #include<string>
 using namespace std;
 

   void Generate(string abtk,int open ,int close ){
     if(open==0 && close==0){
        cout<<abtk<<endl;
     }
     if(open>0){
        Generate(abtk+"(",open-1,close);

     }
     if(close>0&& open<close){
        Generate(abtk+")",open,close-1);
     }

   }
 int main(){
    int n;
    cout<<"Enter a no.: "<<endl;
    cin>>n;
    Generate("",n,n);

    return 0;

 }