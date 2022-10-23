#include<bits/stdc++.h>

struct Node {
    Node* next;
    int data;
    Node(int x) {
        next = NULL;
        data = x;
    }
};

Node* insertAtMid(Node* head, int x) {
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* dataNode = new Node(x);
    dataNode->next = slow->next;
    slow->next = dataNode;
    return head;
}

int main() {
    
}