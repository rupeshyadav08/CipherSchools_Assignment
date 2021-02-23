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
 vector<int> twosum(vector<int>& nums, int target) 
    {
        vector<int> result; 
        map<int, int> sumNumber; 
        map<int, int>::iterator it;
        
        for(int i=0; i<nums.size(); i++)
        {
            it = sumNumber.find(nums[i]);
            if(it == sumNumber.end())
            {
                sumNumber[target - nums[i]] = i;
            }
            else
            {
                result.push_back(sumNumber[nums[i]]);
                result.push_back(i);
                return result; 
            }
        }
        return result;
    }

int main(){
vector<int> vec;
vector<int> ans;
int target;
int n;
cin>>n;
cin>>target;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    vec.push_back(ele);
}
ans=twosum(vec,target);    
for(int i ;i<ans.size();i++){
    cout<<ans[i]<<" ";
}   
}