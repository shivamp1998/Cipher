/*Check if two people starting from different points ever meet*/
#include<bits/stdc++.h>
using namespace std;
bool solve(int x1,int x2,int v1,int v2){
    if(x1 > x2 && v1 >= v2)
    return false;
    if(x1 < x2 && v1 <= v2)
    return false;
    while(x1<=x2){
        if(x1 == x2)
        return true;
        x1+=v1;
        x2+=v2;
    }
    return false;
}
int main(){
    int x1,x2,v1,v2;
    cin>>x1>>x2>>v1>>v2;
    if(solve(x1,x2,v1,v2))
    cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
}