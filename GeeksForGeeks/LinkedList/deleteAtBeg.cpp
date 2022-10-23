#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node* next;
    int data;
    Node(int x) {
        next = NULL;
        data = x;
    }
};

Node* deleteBeg(Node* head) {
    if(head == NULL || head->next ==NULL) return NULL;
    return head->next;
}
int main() {

}