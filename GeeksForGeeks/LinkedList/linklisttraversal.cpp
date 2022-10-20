#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void traverse(Node* list) {
    while(list != NULL) {
        cout<<list->data<<endl;
        list = list->next;
    }
}
int main() {
    Node* list;
    traverse(list);
}