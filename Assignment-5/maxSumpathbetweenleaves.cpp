#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data = val;
        right = left = NULL;
    }
};
int maxSum(TreeNode* root,int &s){
    if(root == NULL)return 0;
    if(!root->left && !root->right)return root->data;
    int ls = maxSum(root->left,s);
    int rs = maxSum(root->right,s);
    if(root->left && root->right){
        s = max(s,ls+rs+root->data);
        return max(ls,rs)+root->data;
    }
    return (!root->left)?rs+root->data:ls+root->data;
}
int maxPath(TreeNode* root){
    int res = INT_MIN;
    maxSum(root,res);
    return res;
}
int main(){
    
}