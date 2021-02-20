#include<bits/stdc++.h>
using namespace std;
 

void KwindowMax(int arr[], int n, int k)
{
    deque<int> Queue(k);
    int i;
    for (i = 0; i < k; ++i) 
    {
     while ((Queue.empty()==false) && arr[i] >= arr[Queue.back()])
    { 
            Queue.pop_back();
    }
        Queue.push_back(i);
    }
    for (i=k; i < n; ++i) 
    {
        cout << arr[Queue.front()] << " ";
        while ((Queue.empty()==false) && Queue.front() <= i - k)
        {
           
          
            Queue.pop_front(); 
        }
 
        while ((Queue.empty()==false) && arr[i] >= arr[Queue.back()])
        {
            Queue.pop_back();
        }
        Queue.push_back(i);
    }
    cout << arr[Queue.front()];
}
 
int main()
{
    
    int n ;
    int k ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    KwindowMax(arr, n, k);
    return 0;
}