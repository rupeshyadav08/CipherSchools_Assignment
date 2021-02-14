#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

int train_platform(int arrive[],int depart[],int n){
    sort(arrive,arrive+n);
    sort(depart,depart+n);
    int platform=1;
    int total=1;
    int i=1;
    int j=0;
    while(i<n && j<n){
        if (arrive[i]<=depart[j])
        {
            platform++;
            i++;

        }
        else if (arrive[i]>depart[j]){
            platform--;
            j++;
        }
        if (platform>total){
            total=platform;
        }
    }
    return total;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int dep[n];
    cout<<"Arival Time"<<endl;
     for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"depart Time"<<endl;
     for (int i=0;i<n;i++)
    {
        cin>>dep[i];
    }
    cout<<train_platform(arr,dep,n);
}