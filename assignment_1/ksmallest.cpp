#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

void ksmallest(int arr[],int n,int k){

    for (int i=k;i<n;i++)
    {
        int Max =arr[k-1];
         int max_position=k-1;
         for(int j = k - 2; j >= 0 ; j--)
            {
                if(arr[j] > Max) 
                {
                    Max = arr[j];
                    max_position = j;
                }
            }
        int curr =arr[i];
        if (Max>curr)
        {
            int index=max_position;
            while(index<k-1)
            {
                arr[index]=arr[index+1];
                index++;
            }
            arr[k-1]=curr;
        }

    }
    for(int j=0;j<k;j++)
    {
        cout<<arr[j]<<" ";

    }
}

int main(){
    int n,k;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter k"<<endl;
    cin>>k;
    ksmallest(arr,n,k);
}