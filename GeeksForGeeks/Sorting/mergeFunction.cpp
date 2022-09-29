#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int low,int mid,int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1] = {0};
    int right[n2] = {0};
    
    for(int i=0;i<n1;i++) {
        left[i] = a[low + i];
    }
    for(int i=0;i<n2;i++) {
        right[i] = a[mid + 1 + i];
    }

    int i = 0 , j = 0,k = 0;
    while(i < n1 && j < n2) {
        if(left[i] < right[j]) {
            a[k] = left[i];
            i++;
            k++;
        }else{
            a[k] = right[j];
            j++;
            k++;
        }
    }

    while( i < n1 ) {
        a[k] = left[i];
        i++;
        k++;
    } 
    
    while( j < n2 ) {
        a[k] = right[j];
        j++;
        k++;
    }

    for(int i=0;i<=high;i++) {
        cout<<a[i]<<" ";
    }

    
}

int main() {
    int a[5] = {10,15,20,11,30};
    merge(a,0,2,4);
}