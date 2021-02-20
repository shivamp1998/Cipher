#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data = val;
        left = right = NULL;
    }
};
void inorder(TreeNode* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
}
void preorder(TreeNode* root){
    if(root!=NULL){
        preorder(root->left);
        preorder(root->right);
        cout<<root->data;
    }
}
void postorder(TreeNode* root){
    if(root!=NULL){
        cout<<root->data;
        postorder(root->left);
        postorder(root->right);
    }
}
int main(){
    
}