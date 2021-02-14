#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

#define m 4
#define n 4

//did not know heap implitation

void ksmall(int arr[m][n],int k)
{
    int a=m*n;
    int arr2[a];
    int l=0;
    for (int i=0;i<m;i++){
        for (int j =0;j<n;j++){
            arr2[l]=arr[i][j];
            l++;
        }
    }

    cout<<"arr2"<<endl;
   
    sort(arr2,arr2+a);
     
    int ans=arr2[k-1];
    cout<<ans;

}

int main(){
         int arr[4][4] = { { 10, 20, 30, 40 },{ 15, 25, 35, 45 },
        { 25, 29, 37, 48 },
        { 32, 33, 39, 50 },
    };
    
    int k=3;
    ksmall(arr,k);

}