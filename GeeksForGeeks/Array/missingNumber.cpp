#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n) {
    int sum = 0;
    int finalSum = (n*(n+1))/2;
    for(int i=0;i<n-1;i++) {
        sum+=arr[i];
    }
    return finalSum - sum;
}
int main() {
    int arr[] = {2,1,3,5};
    cout<<missingNumber(arr,5);
}