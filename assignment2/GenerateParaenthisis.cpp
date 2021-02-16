#include<bits/stdc++.h>
using namespace std;
#define ll long long

int generate(int left, int right, string s){
    if  (left>right){
        return 0;
    }
    if(left==0 && right==0){
        cout<<s<<endl;
        return 0;
 }
 if(left>0){
     generate(left-1,right,s+"(");
 }
 if(right>0){
     generate(left,right-1,s+")");
 }

return 0;

}

int main(){
int left=2;
int right=2;
string s="";
generate(left,right,s);
}