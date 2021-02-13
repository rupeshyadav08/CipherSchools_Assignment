#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

void seg(int arr[],int n){
     int low=0;
     int high=n-1;
     while(low<high){
         while (arr[low]==0 && low<high){
             low++;
         }
         while(arr[high]==1 && high>low){
             high--;
         }
         if (low<high){
             int temp=arr[low];
             arr[low]=arr[high];
             arr[high]=temp;
             high--;
             low++;
         }
     }

     for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    seg(arr,n);

}