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
void leftView(TreeNode* root){
    if(root!=NULL){
        cout<<root->data<<endl;
        if(root->left!=NULL){
            leftView(root->left);
        }else{
            leftView(root->right);
        }
    }   
}
void rightView(TreeNode* root){
    if(root!=NULL){
        cout<<root->data;
        if(root->right!=NULL){
            rightView(root->right);
        }else{
            rightView(root->left);
        }
    }
}


int main(){

}