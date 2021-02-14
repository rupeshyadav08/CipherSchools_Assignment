#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007
// This can be done using the binary search
int first_position(int arr[],int n, int x)
{   int res=-1;
    int left=0;
    int right=n-1;
     while(left<=right){
     int mid = (left+right)/2;
     if (x<arr[mid])
     {
         right=mid-1;
     }
     else if(x>arr[mid]){
         left=mid+1;
     }
     else{
         res=mid;
         right=right-1;}
     
     }

     return res;
}

int last_position(int arr[],int n, int x)
{   int res2=-1;
    int left=0;
    int right=n-1;
    while(left<=right){
     int mid = (left+right)/2;
     if (x<arr[mid])
     {
         right=mid-1;
     }
     else if(x>arr[mid]){
         left=mid+1;
     }
     else{
         res2=mid;
         left=mid+1;
     }
     }
     return res2;
} 
void position(int arr[],int n,int x){
   int a= first_position( arr, n,  x);
   int b= last_position( arr, n,  x);
   cout<<"Position of first and last occurance are:"<<endl;
   cout<<a<<","<<b;
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter The element we want to find"<<endl;
    int x;
    cin>>x;
    position(arr,n,x);

}