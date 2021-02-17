#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000
bool IsSafe(int arr[MAX][MAX], int x, int y,int n)
{
    if(x<n && y<<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool maze(int arr[MAX][MAX], int x,int y, int n,string s,vector <string> possiblePath ,int sol[MAX][MAX] ){
    if ((x==(n-1)) && (y==(n-1))){
        sol[x][y]=1;
        possiblePath.push_back(s);
        return true;
    }

    if (IsSafe(arr,x+1,y,n))
    {
        sol[x][y]=1;

        if (maze(arr,x+1,y,n,s,possiblePath,sol)){
            s.push_back('D');
            return true;
        }
    
    
        if (maze(arr,x,y-1,n,s,possiblePath,sol)){
            s.push_back('L');
            return true;
        }
        
   
   
        s.push_back('U');
        if (maze(arr,x-1,y,n,s,possiblePath,sol)){
            s.push_back('U');
            return true;
        }
    
    
       if ( maze(arr,x,y+1,n,s,possiblePath,sol)){
            s.push_back('R');
            return true;
        }
        sol[x][y]=0;
        return false;
    
    }

return false;
}


// void print(int**  arr,int n){
//     vector<string> possiblePath;
//     bool visited[n][MAX];
//     memset(visited,false,sizeof(visited));
//     string s;
//     maze(arr,0,0,n,s,possiblePath,visited);
//     for(int i=0;i< possiblePath.size();i++){
//         cout<<possiblePath[i]<<" ";
//     }
// }

int main(){
    
    
    int m[MAX][MAX] = { { 1, 0, 0, 0, 0 },
                        { 1, 1, 1, 1, 1 },
                        { 1, 1, 1, 0, 1 },
                        { 0, 0, 0, 0, 1 },
                        { 0, 0, 0, 0, 1 } };

    int n = sizeof(m) / sizeof(m[0]);
    // int** arr=new int*[n];
    // for(int i=0;i<n;i++){
    //     arr[i]=new int[n];
    // }

    // for(int i=0;i<n;i++){
    //    for(int j=0;j<n;j++){
    //        arr[i][j]=m[i][j];
    //        }
    // }
    int sol[MAX][MAX];

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
        {
           sol[i][j]=0;
        }
    }
    string s;
    vector<string> possiblePath;
    if (maze(m,0,0,n,s,possiblePath,sol)){
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
        {
           cout<<sol[i][j];
        }
    }
    }

}