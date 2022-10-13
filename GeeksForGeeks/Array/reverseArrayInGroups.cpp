#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int k = 3, n = 5;
    for(int i=0; i<n; i+=k) {
        int rev = min(i+k-1, n-1);
        int start = i , end = rev;
        while(start < end) {
            swap(arr[start++],arr[end--]);
        }
    }
    for(int i = 0 ; i < n ; i ++)  {
        cout<<arr[i]<<" ";
    }
}