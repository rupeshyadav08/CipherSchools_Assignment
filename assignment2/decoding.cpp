#include<bits/stdc++.h>
using namespace std;
#define ll long long

int decode(string data,int k,int hash []){

    if (k==0)
    {
        return 1;
    }
    string s1=data.substr(0,1);
    if(s1 == "0"){
       return 0;
    }
    
  
    int result = decode(data,k-1,hash);
    string s2=data.substr(0,2);

    int n=stoi(s2);
    if (k>=2 && n<=26){
        result=result+decode(data,k-2,hash);
    }
    return result;
    

}
int main_decoder(string data,int n){
   int hash[n+1];

   for(int i=0;i<n;i++){
       hash[i]=0;
   }
    return decode(data,n,hash);
}
int main(){
string s= "12";
    int n = s.length();
    cout << "Count is " << main_decoder(s, n);
    return 0;
}