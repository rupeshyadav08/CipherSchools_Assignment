#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 1000000007
 
int water(int arr[], int n)
{

    int left[n];
    int right[n];
    right[n - 1] = arr[n - 1];
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);

    
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);
 
    int total=0;
    for (int i = 0; i < n; i++)
        total += min(left[i], right[i]) - arr[i];
 
    return total;
}



int main(){
     int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<water(arr,n);
}