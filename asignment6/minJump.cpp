#include <bits/stdc++.h>
using namespace std;
 #define MAX    10000000
 #define MIN    -10000000
int min(int x, int y) 
{ if (x>y){
    return y;

}
    return x;
}

int JumpCount(int arr[], int n)
{
    int* moves = new int[n];
   
 
    if (n == 0 || arr[0] == 0)
        return MAX;
 
    moves[0] = 0;
 
  
    for (int i = 1; i < n; i++) {
        moves[i] = MAX;
        for (int j = 0; j < i; j++)
         {

            if (i <= j + arr[j] && moves[j] != MAX)
             {
                moves[i] = min(moves[i], moves[j] + 1);
                break;
            }
        }
    }
    return moves[n - 1];
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0; i < n ;i++){
        cin>>arr[i];
    } 
    cout<<JumpCount(arr,n);
    return 0;
}