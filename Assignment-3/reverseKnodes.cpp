#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
Node* reverse(Node* head,int K){
    Node* curr = head, *prev = NULL;
    Node* node = NULL;
    int c = K;
    while(c-- && curr!=NULL){
        node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = node;
    }
    if(head!=NULL) head->next = reverse(node,K);
    return prev;
    
}

int main(){
    
}