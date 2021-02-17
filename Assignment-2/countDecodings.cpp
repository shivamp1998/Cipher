#include<bits/stdc++.h>
using namespace std;
int Decoding(string digits,int n){
    if(n == 0 || n == 1)
    return 1;
    if(digits[0] == '0')
    return 0;
    int count = 0;
    if(digits[n-1] > '0')
    count=Decoding(digits,n-1);
    if(digits[n-2] == '1' || digits[n-2] == '2' && digits[n-1]<'7'){
        count+=Decoding(digits,n-2);
    }
    return count;


}
int main(){
    int n;cin>>n;
    string digits;cin>>digits;
    if(n==0 || n==1 && digits[0]=='0')
    cout<<0;
    else cout<<Decoding(digits,n);
}