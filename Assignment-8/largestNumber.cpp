#include<bits/stdc++.h>
using namespace std;
string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> s(n);
        if(n == 0)
            return "";
        for(int i=0;i<n;i++){
            s[i] = to_string(nums[i]);
        }
        string a,b;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                a = s[i] + s[j];
                b = s[j] + s[i];
                if(b > a){
                    swap(s[j],s[i]);
                }
            }
        }
        string ans="";
        for(int i=0;i<n;i++){
            ans+=s[i];
        }
        if(ans[0] == '0')
            return "0";
        return ans;
    }
    int main(){

    }