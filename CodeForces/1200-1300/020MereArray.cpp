// https://codeforces.com/problemset/problem/1401/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    string canMakeNonDecreasing() { 
        int n;
        cin >> n;
        vector<int> ar(n), tmp(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            tmp[i]=ar[i];
        }
        sort(tmp.begin(), tmp.end());
        int minEle = tmp[0];
        for (int i = 0; i < n; i++) {
            if (ar[i]%minEle!=0 && ar[i]!=tmp[i]) {
                return "NO";
            }
        }
        return "YES";
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
        cout<<ob.canMakeNonDecreasing()<<"\n";
    }
    return 0;
}