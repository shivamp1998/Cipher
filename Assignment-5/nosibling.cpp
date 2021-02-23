#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data = val;
    }
};
void helper(Node* root,vector<int> &a){
    if(root == NULL)
    return;
    if(root->left==NULL && root->right!=NULL)
    a.push_back(root->right->data);
    if(root->left!=NULL && root->right==NULL)
    a.push_back(root->left->data);
    if(root->left);
    helper(root->left,a);
    if(root->right)
    helper(root->right,a);
}
vector<int> noSibling(Node* node)
{
    vector<int> a;
    helper(node,a);
    if(a.size()==0)
    return {-1};
    sort(a.begin(),a.end());
    return a;
}
int main(){

}