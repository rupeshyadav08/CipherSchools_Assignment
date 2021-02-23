#include<bits/stdc++.h>
using namespace std;


struct node {
    int data;
    node* left, *right ;
};
struct node* addnode( int val)
{
    struct node* addnode = new node();
    addnode->data=val;
    addnode->left=addnode->right=NULL;
    return addnode;
}

#include <bits/stdc++.h>
using namespace std;
 
int nonrepeating(string str)
{
    int n = str.size();
    int res = 0; 
    for (int i = 0; i < n; i++) {  
        vector<bool> visited(256);   
        for (int j = i; j < n; j++) {
            if (visited[str[j]] == true)
                break;
            else {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
        visited[str[i]] = false;
    }
    return res;
}
 
int main()
{
    string str = "RupeshYadav";
    int len = nonrepeating(str);
    cout<< len;
    return 0;
}