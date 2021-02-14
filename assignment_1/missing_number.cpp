#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

int missing_number(int arr[],int n){
    int sum=((n+2)*(n+1))/2;
    int initial_sum=0;
    
    int sum2=accumulate(arr,arr+n,initial_sum);
    int ans=sum-sum2;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
  

     for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<missing_number(arr,n);
}