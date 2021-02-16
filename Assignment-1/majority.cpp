#include<bits/stdc++.h>
using namespace std;
int candidate(vector<int> arr, int N){
  int count = 1, majorityCandidate = arr[0];
    for(int i=1;i<N;i++){
        if(arr[i] == majorityCandidate)
        count++;
        else 
        count--;
        if(count == 0){
            count = 1;
            majorityCandidate = arr[i];
        }
    }
    return majorityCandidate;  
}
int majority(vector<int> arr,int N){
    int index = candidate(arr,N);
    int count = 0;
    for(int i=0;i<N;i++){
        if(index == arr[i])
        count++;
    }
    if(count > N/2)
        return index;
    else return -1;
}
int main(){
    int N;cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)cin>>arr[i];
    if(majority(arr,N) == -1)
    cout<<"No Majority Element Exists\n";
    else cout<<majority(arr,N)<<"\n";
}