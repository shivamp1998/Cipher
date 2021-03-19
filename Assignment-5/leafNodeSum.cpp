#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data  = x;
        left = right = NULL;
    }
};
bool nodeSum(Node* root,int S,int sum){
    if(root == NULL)
    return false;
    if(root->right == NULL || root->left == NULL)
    return sum+root->data == S ? true:false;
    return nodeSum(root->right,S,sum+root->data) || nodeSum(root->left,S,sum+root->data);
}
int main(){

}