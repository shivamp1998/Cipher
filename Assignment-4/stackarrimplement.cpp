#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack{
    int top;
    public:
    int a[MAX];
    Stack(){
        top = -1;
    }
    bool push(int x);
    int pop();
    bool isEmpty();
    int getTop();
};
bool Stack::push(int x){
    if(top >= MAX-1){
        cout<<"Stack Full!";
        return false;
    }
    else {
        a[++top] = x;
        return true;
    }
}
int Stack::pop(){
    if(top < 0){
        cout<<"Stack Already Empty!";
        return 0;
    }else{
    int x = a[top--];
    return x;
    }
}

int Stack::getTop(){
    if(top > 0)
    return a[top];
    else cout<<"Stack is Empty!";
}
bool Stack::isEmpty(){
    if(top < 0)
    return true;
    else return false;
}
int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop()<<endl;

}