#include<bits/stdc++.h>
using namespace std;
void generateSubsets(string str,int count,string current) {
        if(count ==  str.length()){
            cout<<current<<" ";
            return;
        }
        generateSubsets(str,count+1,current);
        generateSubsets(str,count+1,current + str[count]);
}
int main() {
    generateSubsets("abc",-1,"");
}