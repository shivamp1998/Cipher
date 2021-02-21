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
int main(){

}