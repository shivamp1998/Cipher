#include<bits/stdc++.h>
using namespace std;
int minSwaps(vector<int> &nums){
    vector<pair<int,int>> v;
    int n = nums.size();
    for(int i=0;i<n;i++){
        v.push_back({nums[i],i});
    }
    sort(v.begin(),v.end());
    vector<bool> visited(n,false);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(visited[i]==true || v[i].second == i)
        continue;
        int j = i;
        int count = 0;
        while(!visited[j]){
            visited[j] = true;
            j = v[j].second;
            count++;
        }
        if(count > 0){
            ans += count-1;
        }    
    }
    return ans;
}
int main(){

}