#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};
int sum(Node* t)
{
    if(t)
    {
        return sum(t->left)+sum(t->right)+t->data;
    }
    return 0;
}
bool isSumTree(Node* t)
{
    if(t==NULL)
    return 1;
    
    if(t->left==NULL&&t->right==NULL)
    return 1;
    
    int lSum = sum(t->left);
    int rSum = sum(t->right);
    int total = lSum + rSum;
    
    if(t->data==total)
    {
        if(isSumTree(t->left)&&isSumTree(t->right))
        return 1;
    }
    
    return 0;
}
int main(){

}