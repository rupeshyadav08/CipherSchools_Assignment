
#include <bits/stdc++.h>
using namespace std;
 #define MAX    10000000
 #define MIN    -10000000
int maxSum(int arr[],int n){
int IncludeSum=arr[0];
int ExcludeSum=0;
 int Sum;
for( int i=0;i<n  ; i++){
    if (ExcludeSum>=IncludeSum){
         Sum =ExcludeSum;
    }
    else{
        Sum=IncludeSum;
    }
    IncludeSum=ExcludeSum+arr[i];
    ExcludeSum= Sum;

}
if (IncludeSum>ExcludeSum){
    return IncludeSum;
}
return ExcludeSum;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSum(arr,n);
}