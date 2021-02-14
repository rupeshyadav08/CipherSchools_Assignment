#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

void merge(int arr1[], int arr2[], int n, int m, int arr3[]) 
{ 
    int i = 0, j = 0, k = 0; 
  
    while (i<n && j <m) 
    { 
        
        if (arr1[i] < arr2[j]) 
            arr3[k++] = arr1[i++]; 
        else
            arr3[k++] = arr2[j++]; 
    } 
    if (i<n){
        while (i < n) 
        arr3[k++] = arr1[i++]; 
    }
   
    if (j<m)
    {
    while (j < m) 
        arr3[k++] = arr2[j++]; 
    }

    for (int i=0; i < n+m; i++) 
    {
        cout << arr3[i] << " "; 
        }
} 

int main(){

    int arr1[] = {6,8, 8, 10}; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 
  
    int arr2[] = {2, 12 , 16, 38}; 
    int m = sizeof(arr2) / sizeof(arr2[0]); 
  
    int arr3[n+m]; 

    merge(arr1,arr2,n,m,arr3);
}