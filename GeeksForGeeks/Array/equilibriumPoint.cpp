#include<bits/stdc++.h>

using namespace std;

int equilibriumPoint (int arr[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    if(n == 1) {
        return 1;
    }
    int sum2 = 0;
    for(int i=n-2;i>=0;i--) {
        sum2+=arr[i+1];
        sum -= arr[i];
        if(sum2 == sum) {
            return i+1;
        }
    }
}
int main() {
    int arr[] = {1,2,5,3,0};
    cout<<equilibriumPoint(arr,5);

}