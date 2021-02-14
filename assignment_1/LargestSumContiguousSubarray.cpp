#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Sum(int arr[],int n){
    int max=0;
    int curr_max=0;
    for (int i = 0;i<n;i++){
        if (curr_max<0){
            curr_max=0;
        }
        curr_max=arr[i]+curr_max;
        
        if (curr_max>max){
            max=curr_max;
        }

    }
    return max;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<Sum(arr,n);

}