#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007
int matrix (int mat[3][3], int n,int x)
{
    if(n==0){
       return -1; 
    }
    int i=0; 
    int j=n-1;

    while(i<n && j>=0)
    {
        if (mat[i][j]==x){
            cout<<"The element lies at index :"<<"("<<i<<","<<j<<")";
            return 1;
        }
        else if (mat[i][j]<x){
            i++;
        }
        else{
            j--;
        }
    }
    return 0;
}
int main(){
    int x;
    
    int mat[3][3];
    for(int i = 0; i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Enter the element to search in the array"<<endl;
    cin>>x;
    matrix(mat,3,x);
}