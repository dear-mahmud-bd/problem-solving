// https://codeforces.com/contest/1705/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void writeEssay() {
        int n, c, q;
        cin >> n >> c >> q;
        string str;
        cin >> str;
        vector<ll> left(c), right(c);
        for (ll i = 0; i < c; i++) {
            cin >> left[i] >> right[i];
            left[i]--;
        }
        vector<ll> totalSteps(c + 1);
        totalSteps[0] = n;
        for (ll i = 0; i < c; i++) {
            totalSteps[i+1] = totalSteps[i] + (right[i]-left[i]);
        }
        while (q--) {
            ll k;
            cin >> k;
            k--;
            for (int i = c-1; i >= 0; i--) {
                if (k >= totalSteps[i]) {
                    k = k - totalSteps[i] + left[i];
                }
            }
            cout << str[k] << '\n';
        }
        return;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        Solution ob;
        ob.writeEssay();
    }
    return 0;
}