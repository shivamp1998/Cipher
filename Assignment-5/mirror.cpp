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
void mirror(TreeNode* node){
    if(node == NULL)
    return;
    else{
        TreeNode* temp;
        mirror(node->left);
        mirror(node->right);
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}
void in(TreeNode* root){
    if(root == NULL)
    return;
    in(root->left);
    cout<<root->data;
    in(root->right);
}


int main(){

}