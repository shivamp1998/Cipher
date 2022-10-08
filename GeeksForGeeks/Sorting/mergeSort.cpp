#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;
  int a1[n1] = {0};
  int a2[n2] = {0};
  for(int i=0;i<n1;i++) {
    a1[i] = arr[l+i];
  }
  for(int i=0;i<n2;i++) {
    a2[i] = arr[m+1+i];
  }
  int i=0,j=0,k=0;
  while(i < n1 && j < n2) {
    if(a1[i] < a2[j]) {
      arr[k] = a1[i];
      k++;
      i++;
    }else{
      arr[k] = a2[j];
      j++;
      k++;
    }
  }
  while(i < n1) {
    arr[k] = a1[i];
    i++;k++;
  }
  while(j < n2) {
    arr[k] = a2[j];
    j++;k++;
  }
}

void mergeSort(int arr[], int l,int r) {
  if(l > r)  {
    int m = l + (r - l) / 2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
  }

}

int main() {
  int a[10] = {2, 1, 4 ,6 ,2 , 6 ,2, 0, 8, 9};
  mergeSort(a,0,9);
  // for(int i=0;i<10;i++) {
  //   cout<<a[i]<<" ";
  // }  
  cout<<endl;
}