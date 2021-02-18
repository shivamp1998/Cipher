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
Node* rearrange(Node* head){
    Node *start1 = NULL, *end1 = NULL;
    Node* start2 = NULL , *end2 =  NULL;
    if(head == NULL)
    return NULL;
    if(head->data % 2 == 0){
        start1 = end1 = head;
    }else{
        start2 = end2 = head;
    }
    head = head->next;
    for(Node* i=head;i!=NULL;i=i->next){
        if(i->data % 2 == 0){
            end1->next = head;
            end1 = head;
            head = head->next;
        }else{
            end2->next = head;
            end2 = head;
            head = head->next;
        }
    }
    end1->next = start2;
    return start1;
}
int main(){

}