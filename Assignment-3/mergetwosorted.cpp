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
Node* merge(Node* a,Node* b){
    if(a == NULL)
    return b;
    if(b == NULL)
    return a;
    Node *start = NULL , *end = NULL;
    if(a->data > b->data){
        start = end  = a;
        b = b->next;
    }else{
        start = end = b;
        a = a->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->data > b->data){
            end->next = b;
            end = b;
            b = b->next;
        }else{
            end->next = a;
            end = a;
            a = a->next;
        }
    }
    if(a!=NULL){
        while(a!=NULL){
            end->next = a;
            a = a->next;
        }
    }else{
        while(b!=NULL){
            end->next = b;
            b = b->next;
        }
    }
    return start;
}
int main(){
    
}