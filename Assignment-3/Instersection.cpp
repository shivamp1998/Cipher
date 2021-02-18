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
int intersection(Node* node1, Node* node2){
    int c1=0,c2=0;
    for(Node* i=node1;i!=NULL;i=i->next){
        c1++;
    }
    for(Node* i=node2;i!=NULL;i=i->next){
        c2++;
    }
    if(c1 > c2){
        int count = abs(c1-c2);
        for(int i=0;i<count;i++){
            node1 = node1->next;
        }
        
    }else{
        int count = abs(c1-c2);
        for(int i=0;i<count;i++){
            node2 = node2->next;
        }
        
    }
    
     while(node1!=node2){
         node1 = node1->next;
         node2 = node2->next;
         if(node1 == node2)
         return node1->data;
    }
        return -1;
}
int main(){

}