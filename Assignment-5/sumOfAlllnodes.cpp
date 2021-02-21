#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
};
void sum(TreeNode* root,int &s){
    if(root!=NULL){
        sum(root->left,s);
        s = s+ root->data;
        sum(root->right,s);
    }
}
int main(){
    TreeNode* root = NULL;
    int s = 0;
    sum(root,s);
    cout<<s;
}