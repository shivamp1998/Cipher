#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

bool zeroSumSubarray(int *arr, int N) {
    vector<int> pre(1000,0);
    int sum = 0;
    for(int i=0;i<N;i++) {
        sum += arr[i];
        pre[sum]++;
    }
    if(pre[0] == 1) {
        return true; 
    }
    for(int i=0;i<1000;i++) {
        if(pre[i]>1) {
            return true;
        } 
    }
    return false;

}

bool zeroSumArraySet(int *arr,int N) {
    unordered_set<int> s;
    int current_sum = 0;
    for(int i=0; i<N; i++) {
        current_sum += arr[i];
        if(s.find(current_sum) != s.end()){
            return true;
        }
        if(current_sum == 0)
            return true;
        s.insert(current_sum);
    }
    return false;
}
int main() {
    int arr[] = {1,4,-3,1,2};
    if(zeroSumSubarray(arr,5)) {
        cout<<"YES";
    }else cout<<"NO";
}