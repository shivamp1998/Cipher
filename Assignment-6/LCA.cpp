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
TreeNode* LCA(TreeNode* root,int a,int b){
    if(root == NULL)
    return NULL;
    if(root->data == a || root->data == b)
    return root;
    TreeNode* lca1 = LCA(root->left,a,b);
    TreeNode* lca2 = LCA(root->right,a,b);
    if(lca1!=NULL && lca2!=NULL)
    return root;
    if(lca1==NULL)
    return lca2;
    else return lca2;
}
int main(){

}
