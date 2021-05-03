#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> findMaxGuests(int Entry[], int Exit[], int N)
    {
        vector<int> preSum(100001 + 1, 0);
        
        for(int i = 0; i < N; i++)
        {
            preSum[Entry[i]]++;
            preSum[Exit[i] + 1]--;
        }
        
        int guests = preSum[0], timer = 0;
        for(int i = 1; i <= 100001; i++)
        {
            preSum[i] += preSum[i - 1];
            
            if(preSum[i] > guests)
            {
                guests = preSum[i];
                timer = i;
            }
        }
        
        return {guests, timer};
    }
};
int main(){

}