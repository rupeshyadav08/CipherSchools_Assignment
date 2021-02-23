#include<bits/stdc++.h>

using namespace std;

int max(int x, int y){
    if(x>y){
        return x;
    }
    return y;
}

  

int Knap(int W, int weight[], int val[], int n)
{
    int i, w;
    int L[n + 1][W + 1];
 
    for (i = 0; i <= n; i++) 
    {
        for (w = 0; w <= W; w++) 
        {
            if (i == 0 || w == 0)
                L[i][w] = 0;
            else if (weight[i - 1] <= w)
                L[i][w] = max(val[i - 1]
                          + L[i - 1][w - weight[i - 1]],
                          L[i - 1][w]);
            else
                L[i][w] = L[i - 1][w];
        }
    }
 
    return L[n][W];
}

int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
     Knap(W,wt,val,3);
    return 0;
}