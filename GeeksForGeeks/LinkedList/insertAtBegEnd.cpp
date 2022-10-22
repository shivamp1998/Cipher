#include<bits/stdc++.h>
using namespace std;

struct Node{
    struct Node* next;
    int data;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* insertAtBeg(Node* head, int x) {
    Node* temp = new Node(x);
    temp->next = head;
    return temp;
}
Node* insertAtEnd(Node* head, int x) {
    Node* insert = new Node(x);
    Node* temp = head;
    if(head == NULL ) return insert;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = insert;
    return head;
}
int main() {

}