#include<bits/stdc++.h>
using namespace std;
#define ll long long



void combination(string s, int left, int right) 
{ 
    if (left == right) 
        cout<<s<<endl; 
    else
    { 
        for (int i = left; i <= right; i++) 
        { 
 
            swap(s[left], s[i]); 
 
            combination(s, left+1, right); 
 
            swap(s[left], s[i]); 
        } 
    } 
} 
 
int main() 
{ 
    string str = "ABD"; 
    int n = str.size(); 
    combination(str, 0, n-1); 
    return 0; 
} 
 