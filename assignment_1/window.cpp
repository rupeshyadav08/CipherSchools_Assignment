#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007


string sunstring(string str,string pat)
{
    int n=str.length();
    int m=pat.length();

    if (m>n){

        return " not exists";
    }
    int has_pat[256]={};
    int has_str[256]={};
    for(int i;i<m;i++){
        has_pat[pat[i]]++;
    }
    



}