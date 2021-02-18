#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        next = NULL;
        data = value;
    }
};
void removeLoop(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    if(head==NULL && head->next == NULL)
    return;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        break;
    }
    if(slow == head){
        while(slow->next!=head){
            slow = slow->next;
        }
        slow->next = NULL;
    }
    if(slow == fast){
        slow = head;
        while(slow->next!=fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = NULL;
    }
}
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int intersectPoint(Node* head1, Node* head2)
{
    int cnt1=0,cnt2=0;
    Node* curr;
    for(curr=head1;curr!=NULL;curr=curr->next)
    cnt1++;
    for(curr=head2;curr!=NULL;curr=curr->next)
    cnt2++;
    
    int k = abs(cnt1-cnt2);
    if(cnt1>cnt2){
        while(k--){
            head1 = head1->next;
        }
    }else{
        while(k--){
            head2 = head2->next;
        }
    }
    while(head2->next!=head1->next){
        head2 = head2->next;
        head1 = head1->next;
    }
    return head2->next->data;
}

int main(){
    Node* head = new Node(0);
}