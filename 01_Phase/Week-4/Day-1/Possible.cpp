// https://www.codechef.com/problems/CS2023_PON
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string chkSubSqnc() {
        ll n, b;
        cin >> n >> b;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool found = false;
        for (ll i = 1; i < (1 << n); i++) {
            ll bitwise_and = -1;
            for (ll j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    bitwise_and &= a[j];
                }
            }
            if (bitwise_and == b) {
                found = true;
                break;
            }
        }
        if (found) {
            return "YES";
        } else {
            return "NO";
        }
    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.chkSubSqnc()<<"\n";
    }
    return 0;
}