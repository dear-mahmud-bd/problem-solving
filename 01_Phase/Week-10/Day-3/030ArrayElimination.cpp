// https://codeforces.com/contest/1602/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
const int MOD = 1e9+7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void functionName() { 
        int n, grtstCmnDiv = 0;
        cin >> n; 
        vector<int> elements(n), bitCount(30);
        for (int i = 0; i < n; i++) {
            cin >> elements[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 30; j++) {
                if (elements[i] & (1 << j)) {
                    bitCount[j]++;
                }
            }
        }
        for (int i = 0; i < 30; i++) {
            grtstCmnDiv = gcd(grtstCmnDiv, bitCount[i]);
        }
        for (int i = 1; i <= n; i++) {
            if (grtstCmnDiv % i == 0) {
                cout << i << ' ';
            }
        }
        cout << "\n";
        return ;
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
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}