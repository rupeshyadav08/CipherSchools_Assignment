#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

int peak(int arr[],int n)
{
    if(n==1)
    {
        return arr[0];
    }
    if(arr[0]>=arr[1])
    {
        return 1;
    }
    if (arr[n-1]>=arr[n-2]){
         return (n-1);
    }
    for (int i=1;i<n-1;i++)
    {
        if(arr[i]>=arr[i-1] && arr[i]>arr[i+1]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<peak(arr,n);

}