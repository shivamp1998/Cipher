#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int> &s,int k){
    if(s.empty()){
        s.push(k);
        return;
    }
    int temp = s.top();
    s.pop();
    insert_at_bottom(s,k);
    s.push(temp);
}
void reverse(stack<int> &s){
    if(s.size() == 1){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    insert_at_bottom(s,temp);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}