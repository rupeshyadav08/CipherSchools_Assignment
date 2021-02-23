#include<bits/stdc++.h>

using namespace std;
int min(int x,int y,int z){
    if (x<y && x<z){
        return x;
    }
    else if(y>x && y>z)
    {
    return y;
    }
    return z;
}
int EditDidtance(string s1, string s2, int m ,int n)
{
    int dp[m + 1][n + 1];
 
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0)
                dp[i][j] = j; 
            else if (j == 0)
                dp[i][j] = i; 
 
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
 
            
            else
                dp[i][j]
                    = 1+ min(dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]); 
        }
    }
 
    return dp[m][n];

    
}

int main(){
    string s1="Ram";
    string s2="Man";
    cout<<EditDidtance(s1,s2,3,3);
}