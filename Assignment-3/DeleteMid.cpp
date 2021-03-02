#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* deleteMid(Node* head)
{
       if(head == NULL)
       return head;
       Node *fast = head;
       Node *slow = head;
       Node  *prev = head;
       while(fast!=NULL && fast->next!=NULL){
           prev = slow;
           slow = slow->next;
           fast = fast->next->next;
       }
       prev->next = slow->next;
       return head;
}
int main(){
    
}