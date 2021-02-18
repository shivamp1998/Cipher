#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
    }
};
void removeOcurrances(Node* head){
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;
    Node* curr =  head;
    while(curr!=NULL){
        while(curr->next!=NULL && prev->next->data == curr->next->data)
            curr = curr->next;
        if(prev->next == curr)
            prev = prev->next;
        else prev->next = curr->next;

        curr = curr->next; 
    }
}
int main(){

}