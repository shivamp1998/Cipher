/* Maximum Pieces of Rope from given Subset */

#include<bits/stdc++.h>
using namespace std;

int maxPieces(int n,int a,int b,int c) {
    if(n == 0)
        return 0;
    if(n < 0)
        return -1;
    int maxP = max(maxPieces(n-a,a,b,c), maxPieces(n-b,a,b,c));
    int ansMax = max(maxP,maxPieces(n-c,a,b,c));


    if(ansMax == -1)
        return -1;
    else return ansMax+1;
}

int main() {
    int ans = maxPieces(9,2,2,2);
    cout<<ans;
    
}