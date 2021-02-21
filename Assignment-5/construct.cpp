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
int search(int arr[],int start,int end, int value){
    for(int i=start;i<=end;i++){
        if(arr[i] == value)
        return i;
    }
}
TreeNode* build(int in[],int pre[],int start, int end){
    int index = 0;
    if(start > end)
    return NULL;
    
    TreeNode* Node = new TreeNode(pre[index++]);
    if(start == end)
    return Node;
    int inIndex = search(in,start,end,Node->data);
    Node->right = build(in,pre,start,inIndex-1);
    Node->left = build(in,pre,inIndex+1,end);
}
int main(){

}