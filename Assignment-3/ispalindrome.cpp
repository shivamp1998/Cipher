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
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* findMid(Node* head){
    Node * curr=head, *prev=head;
    while(curr->next!=NULL && curr->next->next!=NULL){
       curr = curr->next->next;
       prev = prev->next; 
    }
    return prev;
}
bool isPalindrome(Node* head){
    Node* mid = findMid(head);
    Node* prev = NULL,*curr = mid->next;
    Node* node = NULL;
    while(curr!=NULL){  
        node = curr->next;
        curr->next=prev;
        prev = curr;
        curr  = node;
    }
    curr = prev;
    while(head!=mid && curr!=NULL){
        if(curr->data != head->data)
        return false;
        curr = curr->next;
        head = head->next;
    }
    return true;
}
int main(){
   int N;cin>>N;
   int k;cin>>k;
   Node* temp = new Node(k);
   Node* head = temp;
   for(int i=0;i<N-1;i++){
       int p;cin>>p;
       temp->next = new Node(p);
       temp = temp->next;
   }
   if(isPalindrome(head))
   cout<<"Yes!"<<endl;
   else cout<<"No!"<<endl;
}