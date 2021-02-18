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
Node *swapkthnode(Node* head, int num, int K)
{
    if(K>num)
    return head;
    if(K==num-K+1)
    return head;
    
    
    Node *temp1=head,*temp2=head;
    Node *prev1 = NULL, *prev2 = NULL;
    for(int i=1;i<num-K+1;i++){
        prev1 = temp1;
        temp1 = temp1->next;
    }
    for(int i=1;i<K;i++){
        prev2 = temp2;
        temp2 = temp2->next;
    }
    if(prev1)
    prev1->next = temp2;
    if(prev2)
    prev2->next = temp1;
    Node* temp = temp1->next;
    temp1->next = temp2->next;
    temp2->next = temp;
    if(K==1)
    head = temp1;
    if(K==num)
    head = temp2;
    return head;
}
int main(){
    
}