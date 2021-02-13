#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007
void swap(int a,int b){
    int temp= a;
     a= b;
     b= temp;
}
void sort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid <=high)
    {
        if (arr[mid]==0){
            int temp= arr[mid];
            arr[mid]= arr[low];
            arr[mid]= temp;
            mid++;
            low++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            int temp= arr[mid];
            arr[mid]= arr[high];
            arr[high]= temp;
            high--;
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
    sort(arr,n);
}