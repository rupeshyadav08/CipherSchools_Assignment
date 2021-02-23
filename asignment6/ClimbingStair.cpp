#include<bits/stdc++.h>
using namespace std;

int stair(int n){
    int result[n];
    for(int i = 0 ; i < n ; i++)
    {
    if (i==1 || i==2)
    {
        result[i]=i;
    }
    else{
        result[i]=result[i-1]+result[i-2];
    }
    }
    return result[n];
}

int main(){
    int n;
    cin>>n;
    stair(n);
}