#include <bits/stdc++.h>
using namespace std;
struct DQueNode {
    int value;
    DQueNode* next;
    DQueNode* prev;
};
class Deque {
private:
    DQueNode* head;
    DQueNode* tail;
public:
    Deque()
    {
        head = tail = NULL;
    }
    bool isEmpty()
    {
        if (head == NULL)
            return true;
        return false;
    }
    int size()
    {
        if (!isEmpty()) {
            DQueNode* temp = head;
            int len = 0;
            while (temp != NULL) {
                len++;
                temp = temp->next;
            }
            return len;
        }
        return 0;
    }
    void insert_first(int element)
    {
        
        DQueNode* temp = new DQueNode[sizeof(DQueNode)];
        temp->value = element;
        if (head == NULL) {
            head = tail = temp;
            temp->next = temp->prev = NULL;
        }
        else {
            head->prev = temp;
            temp->next = head;
            temp->prev = NULL;
            head = temp;
        }
    }
    void insert_last(int element)
    {
        DQueNode* temp = new DQueNode[sizeof(DQueNode)];
        temp->value = element;
        if (head == NULL) {
            head = tail = temp;
            temp->next = temp->prev = NULL;
        }
        else {
            tail->next = temp;
            temp->next = NULL;
            temp->prev = tail;
            tail = temp;
        }
    }
    void remove_first()
    {
        if (!isEmpty()) {
            DQueNode* temp = head;
            head = head->next;
            head->prev = NULL;
            free(temp);
            return;
        }
        
    }
 
    void remove_last()
    {
        if (!isEmpty()) {
            DQueNode* temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            free(temp);
            return;
        }
       
    }
 
   
    void display()
    {
        if (!isEmpty()) {
            DQueNode* temp = head;
            while (temp != NULL) {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
            return;
        }
        
    }
};
 
class Stack : public Deque {
public:
    void push(int element)
    {
        insert_last(element);
    }
 
    void pop()
    {
        remove_last();
    }
};
 
class Queue : public Deque {
public:
    void enqueue(int element)
    {
        insert_last(element);
    }
 
    void dequeue()
    {
        remove_first();
    }
};
 
int main()
{
    Stack stk;
    stk.push(7);
    stk.push(8);
    cout << "Stack: ";
    stk.display();
    stk.pop();
    cout << "Stack: ";
    stk.display();
    Queue que;
    que.enqueue(12);
    que.enqueue(13);
    cout << "Queue: ";
    que.display();
    que.dequeue();
    cout << "Queue: ";
    que.display();
 
}