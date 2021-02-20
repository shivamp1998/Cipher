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
vector<int> levelOrder(TreeNode* root){
    vector<int> level;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        level.push_back(temp->data);
        if(temp->right!=NULL)
        q.push(temp->right);
        if(temp->left!=NULL)
        q.push(temp->left);
    }
    return level;
}
int main(){

}