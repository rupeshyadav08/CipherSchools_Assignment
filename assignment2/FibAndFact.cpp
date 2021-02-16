#include<bits/stdc++.h>
using namespace std;

#define ll long long 
 
int fib(int n){
    if(n==0 || n==1){
        return n;
    }

    return fib(n-2)+fib(n-1);  

}

int fact(int n){
    if (n==0 || n== 1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    cout<<endl;
    cout<<fact(n);
}