#include<bits/stdc++.h>
using namespace std;

struct MyHash {
    int *arr;
    int cap,size;
    MyHash(int c) {
        cap = c;
        size = 0;
        for(int i=0;i<cap;i++) {
            arr[i] = -1;
        }
    }
    int hash(int key) {
        return key%cap;
    }
    bool search(int key) {
        int i = key%cap;
        if(arr[i] == key) {
            return true;
        }else{
            while(arr[i]!=-1) {
                if(arr[i] == key) {
                    return true;
                }
                i = (i++)%cap;
            }
        }
        return false;
    }
    bool insert(int key) {
        int i = key % cap;
        if(arr[i] != -1){
            while(arr[i] != -1 && arr[i]==-2 && arr[i]!=key) {
                i = i++ % cap;
            }
        }
        arr[i] = key;
    }
    bool erase(int key) {
        int i = key % cap;
        if(arr[i] == key) {
            arr[i] = -2;
        }else{
            while(arr[i]!=key) {
                i = i++ % cap;
            }
            arr[i] = -2;
        }
    }
};

int main() {
       
}