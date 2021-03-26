#include<bits/stdc++.h>
using namespace std;
bool myCmp(pair<int,int> &a, pair<int,int> &b){
    return b.second > a.second;
}
int activitySelection(vector<int> start, vector<int> end,int n){
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({start[i],end[i]});
    }
    sort(v.begin(),v.end(),myCmp);
    pair<int,int> u = v[0];
    int count = 1;
    for(int i=1;i<n;i++){
        if(u.second < v[i].first){
            count++;
            u = v[i];
        }
    }
    return count;
}
int main(){

}