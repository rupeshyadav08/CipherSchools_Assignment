#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007
int pivot(int arr[],int low,int high){
    if (low>high){
        return -1;
    }
    int mid=(high+low)/2;

    if(high>mid && arr[mid]>arr[mid+1]){
        return mid;
    }
    if (low<mid && arr[mid]<arr[mid-1]){
        return (mid-1);
    }
    if (arr[low]>arr[mid]){
        return pivot(arr,low,mid-1);
    }
    return pivot(arr,mid+1,high);
}

int binary_Search(int arr[],int low,int high,int key){
    if(high < low){
        return -1;
    }
    int mid=(high+low)/2;
    if (arr[mid]==key)
        return mid;
    if (key>arr[mid]){
        return binary_Search(arr, mid+1,high,key);
    }
    return binary_Search(arr,low,mid-1,key);
    
     
}

int search(int arr[], int n, int key){
    int a=pivot(arr,0,n-1);
    if (a==-1){
        return binary_Search(arr,0,n-1,key);
    }
    if (arr[a]==key){
        return a;
    }
    if(arr[0]<=key){
        return binary_Search(arr,0,a-1,key);
    }
    return binary_Search(arr,a+1,n-1,key);
}

int main(){
int arr[]={4,5,1,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<search(arr,n,5);

}