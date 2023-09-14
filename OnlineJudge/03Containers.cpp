// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2408
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void functionName() {
        int n, m;
        cin >> n >> m;
        int mx = 0;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        int l=mx, r=INT_MAX, ans;
        while (l <= r) {
            int cap = l + (r-l)/2;
            int cnt = 1;
            int s = 0;
            for (int i = 0; i < n; i++){
                if (s+a[i] <= cap){
                    s += a[i];
                } else {
                    cnt++;
                    s = a[i];
                }
            }
            if (cnt <= m){
                ans = cap;
                r = cap - 1;
            } else {
                l = cap + 1;
            }
        }
        cout << ans << "\n";
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}
/* 
Input-1
5 3
1 2 3 4 5

Input-2
3 2      
4 78 9 
*/ 