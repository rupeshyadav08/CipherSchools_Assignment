#include<bits/stdc++.h>
using namespace std;
#define ll long long

int helper (int m,int n,int memo[100][100] )
{   
    if (m==0 || n==0){
        return 0;
    }
    if( m==1 and n==1){
        return 1;
    }
    if (memo[m][n]!=0){
        return memo[m][n];
    }
    memo[m][n]=helper(n-1,m,memo)+helper(n,m-1,memo);
    return memo[m][n];
}
int main(){
    int m=2,n=3;
    int memo[100][100];
    cout<<helper(m,n,memo);
}