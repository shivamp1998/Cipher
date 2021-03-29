#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;
    Tree(int x){
        data = x;
        left = right = NULL;
    }
};
string HuffmanDecoding(Tree* root,string s){
    string ans = "";
    Tree* curr = root;
    for(int i=0;i<s.length();i++){
        if(s[i] == '0'){
            curr = curr->left;
        }else{
            curr = curr->right;
        }
        if(curr->data!= '$'){
            string sp(1,curr->data);
            ans += sp;
            curr = root;
        }
    }
    return ans;
}
int main(){

}