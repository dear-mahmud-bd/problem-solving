// https://www.codechef.com/problems/TENPACKETS
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minCost() { 
        float X, Y;
        cin >> X >> Y;
        return X+(2*Y);
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.minCost()<<"\n";
    }
    return 0;
}