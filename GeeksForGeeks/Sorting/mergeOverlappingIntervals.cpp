#include<bits/stdc++.h>
using namespace std;
struct interval {
    int start;
    int end;
};
bool cmp( interval a, interval b) {
    return a.start < b.start;
}

int mergeInterval(vector<interval> &a, int n) {
    int res = 0;
    for(int i=1;i<n;i++) {
        if(a[res].end >= a[i].start) {
            a[res].start = min(a[res].start, a[i].start);
            a[res].end = max(a[res].end,a[i].end);
        }else{
            res++;
            a[res] = a[i];
        }
    }
}

int main() {
    vector<interval> a;
    for(int i=0;i<4;i++) {
        interval o;
        cin>>o.start>>o.end;
        a.push_back(o);
    }
    sort(a.begin(), a.end(), cmp);
    int ans = mergeInterval(a,4);
    for(int i=0;i<ans;i++) {
        cout<<a[i].start<<" "<<a[i].end<<" ";
        cout<<endl;
    }
}