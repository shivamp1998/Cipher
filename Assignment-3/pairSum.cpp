#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
int pairSum(Node* head1,Node* head2,int x){
    vector<int> a;
    unordered_set<int> b;
    while(head1!=NULL){
        a.push_back(head1->data);
        head1 = head1->next;
    }
    while(head2!=NULL){
        b.insert(head2->data);
        head2 = head2->next;
    }
    int count = 0;
    for(int i=0;i<a.size();i++){
        if(b.count(x-a[i]))
        count++;
    }
    return count;
}
int main(){
    

}