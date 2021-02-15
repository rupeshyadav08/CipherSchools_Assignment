#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{ 
    vector<int> g; 
    
    for (int i = 1; i <= 10; i++)
    {
        int ele;
        cin>>ele;
        g.push_back(ele);
    }
    for (int i = 1; i <= 10; i++)
    {
       
        g.push_back(i);
    }
    for (auto i = g.begin(); i != g.end(); ++i) 
    {
        cout << *i << " ";
    }
}
