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
TreeNode* LCA(TreeNode* root,int m, int n){
    if(root == NULL)
    return NULL;
    if(root->data == m  || root->data == n){
        return root;
    }
    TreeNode* lca1 = LCA(root->left,m,n);
    TreeNode* lca2 = LCA(root->right,m,n);
    if(lca1!= NULL && lca2!=NULL)
    return root;
    if(lca1 == NULL)
    return lca2;
    else return lca1;
}
int main(){
    
}