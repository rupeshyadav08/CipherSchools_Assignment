#include<bits/stdc++.h>

using namespace std;

int max(int x, int y){
    if(x>y){
        return x;
    }
    return y;
}

  

int Lps(string str,int n) 
{ 
 
   int i, j, a; 
   int L[n][n];  
  
   for (i = 0; i < n; i++) 
      L[i][i] = 1; 
  

    for (a=2; a<=n; a++) 
    { 
        for (i=0; i<n-a+1; i++) 
        { 
            j = i+a-1; 
            if (str[i] == str[j] && a == 2) 
               L[i][j] = 2; 
            else if (str[i] == str[j]) 
               L[i][j] = L[i+1][j-1] + 2; 
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]); 
        } 
    } 
  
    return L[0][n-1]; 
} 

int main(){
    string s="madam";
    int n= s.length();
    cout<<Lps(s,n);
}