#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m  5

bool isSafe(int grid[m][m],int i , int k,int n){
    for (int row = 0; row < i; row++) {
            if (grid[row][k] == 1) {
                return false;
            }
        }

        int x = i;
        int y = k;

        while (x >= 0 && y >= 0) {
            if (grid[x][y] == 1) {
                return false;
            }
            x--;
            y--;
        }

        x = i;
        y = k;
        while (x >= 0 && y < n) {
            if (grid[x][y] == 1) {
                return false;
            }
            x--;
            y++;
        }

      return true;
    }





bool placequeen(int grid[m][m],int i,int n){
    if (i == n) {
            //Print the grid
            for (int row = 0; row < n; row++) {
                for (int col = 0; col < n; col++) {
                    cout<<grid[row][col] << "   ";
                }
                cout<<"\n";
            }
            return true;
        }

        for (int k = 0; k < n; k++) {
            if (isSafe(grid, i, k,n)) {
                grid[i][k] = 1;
                bool isPlaced = placequeen(grid, i + 1,n);
                if (isPlaced) {
                    return true;
                }
                grid[i][k] = 0;
            }
        }
        return false;
}

int main(){
    int n= 5;
    int grid[m][m];
    placequeen(grid,0,n);
}