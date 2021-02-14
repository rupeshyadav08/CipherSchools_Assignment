#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

/*
Here we are going to use the recursive apporach to print the element
by decreasing the dimension of the array
*/

void spiral(int n, int m, int a, int b, int arr[4][4])
{
     // base condition 
     if (a >= n || b>=m){
         return;
     }
     for(int i =b; i<m ;i++)
     {
         cout<<arr[a][i]<<" ";

     }
     for (int i=a+1;i<n;i++){
         cout<<arr[i][m-1]<<" ";
     }
     //Check if last and first row are not same
     if ((n-1)!=a){
         for(int i=m-2;i>=b;i--){
             cout<<arr[n-1][i]<<" ";
         }
     }
     //Check if last and first column are not same
     if ((m-1)!=b){
         for(int i=m-2;i>a;i--){
             cout<<arr[i][b]<<" ";
         }
     }
     spiral( n-1,  m-1,  a+1,  b+1,  arr);
}

int main(){
    int arr[4][4] = { { 1, 2, 3, 4 },
                    { 5, 6, 7, 8 },
                    { 9, 10, 11, 12 },
                    { 13, 14, 15, 16 } };
    int a=0;
    int b=0;
    int m=4;
    int n=4;
    spiral(n,m,a,b,arr);
}