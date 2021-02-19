#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int data;
    Stack* next;
};
Stack* newNode(int x){
    Stack* stackNode = new Stack();
    stackNode->data = x;
    stackNode->next = NULL;
    return stackNode; 
}
int isEmpty(Stack* root){
    if(root==NULL)
    return 1;
    else return 0;
}

void push(Stack** root,int data){
    Stack* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    cout<<"data Pushed!";
}
int pop(Stack** root){
    if(!isEmpty(*root)){
        return INT_MIN;
    }
    Stack* temp = *root;
    *root = (*root) -> next;
    int x = temp->data;
    free(temp);
    return x;
}
int top(Stack* root){
    if(isEmpty(root)){
        return INT_MIN;
    }
    return root->data;
}
int main(){
    Stack* root = NULL;
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    cout<<pop(&root)<<endl;
}