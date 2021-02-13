#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000007
bool meet(int s1,int s2,int v1, int v2)
{

if(s1 < s2 && v1 <= v2) 
{
        return false;

}
if  (s1 > s2 && v1 >= v2){
    return false;
}

  int diff;
  int RelativeSpeed;
  RelativeSpeed =v1-v2;
  diff=s1-s2;
  return ((s1 - s2) % (v1 - v2) == 0);

}

int main()
{
    int x1,x2,v1,v2;
    cout<<"Enter the value of x1:"<<endl;
    cin>>x1;
    cout<<"Enter the value of x2:"<<endl;
    cin>>x2;
    cout<<"Enter the speed v1:"<<endl;
    cin>>v1;
    cout<<"Enter the speed v2:"<<endl;
    cin>>v2;
    bool ans=meet(x1,x2,v1,v2);

    if (ans==false){
        cout<<"They will not meet"<<endl;
    }
    else{
        cout<<"They will meet"<<endl;
    }

}