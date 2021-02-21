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
int height(TreeNode* root){
    if(root == NULL)
    return 0;
    return 1+max(height(root->left),height(root->right));
}
int diameter(TreeNode* root){
    if(root == NULL)
    return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    int ld = diameter(root->left);
    int rd = diameter(root->right);
    return max(lh+rh+1,max(ld,rd));
}

int main(){

}