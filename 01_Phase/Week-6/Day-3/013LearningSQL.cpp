// https://www.codechef.com/problems/LEARNSQL
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int functionName() { 
        int R, C, E;
        cin >> R >> C >> E;
        int totalCells = C * (R + E);
        return totalCells;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.functionName()<<"\n";
    }
    return 0;
}