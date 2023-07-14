// https://www.codechef.com/problems/DISTANCECOLO
#include <bits/stdc++.h>
typedef long long int ll;
const int MOD = 1e9 + 7;
using namespace std;
class Solution{
    public:
    ll countWays() {
        int n, k;
        cin >> n >> k;
        ll result = 1;
        for (int i = 0; i < n; i++) {
            if(k > 0){
                result = (result * k) % MOD;
                k--;
            }else{
                break;
            }
        }
        return result;
    }
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.countWays()<<"\n";
    }
    return 0;
}