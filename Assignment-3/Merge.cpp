#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
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
Node* merge(Node* arr[],int K){
    if(K==1)
    return merge(arr,NULL);
    Node* temp = merge(arr[0],arr[1]);
    for(int i=2;i<K;i++){
        temp = merge(arr[i],temp);
    }
    return temp;
}
int main(){
    
}