#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007

void  major(int arr[],int n )
{
    map <int, int> hm;
    for(int i = 0; i < n; i++)
    {
        hm[arr[i]]++;
    }
    int count = 0;
    for(auto it : hm)
    {
        if(it.second > n / 2)
        {
            count =1;
            cout << "Majority exits:- " << it.first<<endl;
            break;
        }
    }
    if(count == 0)
    {
        cout << "Majority element exits:- " << endl;
    }
}

int main()
{
   int n;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   major(arr,n);
}
