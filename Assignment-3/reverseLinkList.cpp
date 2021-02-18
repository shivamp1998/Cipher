#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int newData){
        data = newData;
        next = NULL;
    }
};
void insertAtBeg(Node** head,int key){
    Node* temp = new Node(key);
    temp->next = *head;
    *head = temp;
}
void PrintList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* reverse(Node* head){
    Node *curr = head,*prev = NULL,*node = curr->next;
    while(curr!=NULL){
        node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = node;
        }
        return prev;
         
}
int main(){
    Node* head = NULL;
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int a;cin>>a;
        insertAtBeg(&head,a);  
    }
    head = reverse(head);
    PrintList(head);
}