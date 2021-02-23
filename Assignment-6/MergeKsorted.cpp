#include<bits/stdc++.h>
using namespace std;
#define N 105
class Triplet{
    public:
    int val;
    int arrposn;
    int valposn;
    Triplet(int v,int ap, int vp){
        val = v;
        arrposn = ap;
        valposn = vp;
    }
};
struct mycmp{
    
    bool operator()(Triplet &t1,Triplet &t2){
        return t1.val > t2.val;
    }
};
vector<int>  merge(int arr[][N],int k){
    priority_queue<Triplet,vector<Triplet>,mycmp> q;
    for(int i=0;i<k;i++){
        Triplet t1(arr[i][0],i,0);
        q.push(t1);
    }
    vector<int> res;
    int p=0;
    while(q.empty()==false){
        Triplet curr = q.top();
        q.pop();
        res.push_back(curr.val);
        int vp = curr.valposn;
        int ap = curr.arrposn;
        if(vp < k){
            Triplet t(arr[ap][vp++],ap,vp++);
            q.push(t);
        }
        
    }
    return res;
}
int main(){

}