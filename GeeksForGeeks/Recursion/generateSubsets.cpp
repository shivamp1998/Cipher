#include<bits/stdc++.h>
using namespace std;
void generateSubsets(string str,int count,string subsets) {
        if(count >= str.length())
            cout<<subsets<<" "<<endl;
        generateSubsets(str,count,subsets+str[count]);
        generateSubsets(str,count+1,subsets+str[count]); 
}
int main() {
    generateSubsets("ab",0,"");
}