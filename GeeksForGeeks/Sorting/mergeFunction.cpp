#include<bits/stdc++.h>
using namespace std;
void sortFunction(int a[],int low,int mid,int high) {
    int t1[ mid+1];
    int t2[high-mid];
    for(int i = 0 ; i <= mid ; i++) {
        t1[i] = a[i];
    }
    for(int i=0;i<high;i++) {
        cout<<a[i]<<endl;
    }
    for(int i = mid + 1 ;i<  high ; i++) {
        t2[i] = a[i];
    }
    int j = 0 , k = 0 ;
    while(j < mid + 1 && k < high - low ) {
        if(t1[j] > t2[k]) {
            cout<<t2[k]<<" ";
            k++;
        }else{
            cout<<t1[j]<<" ";
            j++;
        }
    }

    
}
int main() {
    int arr[5] = {10,15,20,11,30};
    sortFunction(arr,0,2,5);
}