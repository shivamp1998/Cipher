#include<bits/stdc++.h>
using namespace std;

void toh(int n,int from, int aux, int to) {
    if ( n == 1) {
        cout<<"Move Disk 1 from rod 1 to rod 3"<<endl;
        return;
    }
    toh(n-1,from,to,aux);
    cout<<"Move Disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    toh(n-1,aux,from,to);
}
int main() {
    toh(3,1,3,2);
}