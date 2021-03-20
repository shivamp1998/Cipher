#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    public: 
        int data;
        Node* next;
        Node(int x){
            data = x;
            next = NULL;
        }
};
Node* deleteNode(Node* head,int x){
    
    if(head == NULL)
    return head;
    if(x == 1)
    return head->next;
    Node* curr = head->next;
    Node* prev = head;
    int pos = 2;
    while(curr!=NULL){
        if(pos == x){
            prev->next = curr->next;
        }
        prev = curr;
        curr = curr->next;
        pos++;
    }
    return head;
    
}
int main(){
    
}