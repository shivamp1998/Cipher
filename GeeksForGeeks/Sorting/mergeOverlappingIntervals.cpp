#include<bits/stdc++.h>
using namespace std;
struct interval {
    int start;
    int end;
};

void mergeInterval(int arr[], int n) {
    
}

int main() {
    vector<interval> a;
    for(int i=0;i<4;i++) {
        interval o;
        cin>>o.start>>o.end;
        a.push_back(o);
    }
    for(int i=0;i<4;i++) {
        cout<<a[i].start<<" "<<a[i].end<<endl;
    }
    
}