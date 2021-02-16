#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
vector<int> alternateSort(int arr[], int N)
	{
	    sort(arr,arr+N);
	    int i = 0 , j = N-1;
	    vector<int> a;
	    while(i<=j){
	        if(i == j){
	            a.push_back(arr[i]);
	            break;
	        }
	        a.push_back(arr[j]);
	        a.push_back(arr[i]);
	        i++;
	        j--;
	        
	    }
	    return a;
	}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int> a = alternateSort(arr,n);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}