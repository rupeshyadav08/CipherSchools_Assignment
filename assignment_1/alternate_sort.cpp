#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

void sort(int arr[], int n) 
{ 
    
    sort(arr, arr+n); 
  
    
    int i = 0;
    int j = n-1; 
    while (i < j) { 
        cout << arr[j--] << " "; 
        cout << arr[i++] << " "; 
    } 
  
    if (n % 2 != 0) 
        cout << arr[i]; 
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
