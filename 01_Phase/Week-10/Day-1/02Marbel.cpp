// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415
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
        int n, q, cs = 1, x;
        while (cin >> n >> q){
            if (n==0 && q==0) break;
            cout<<"CASE# "<<cs++<<":"<<"\n";
            vector<int> a(n);
            for (int i = 0; i < n; i++){
                cin >> a[i];
            }
            sort(a.begin(), a.end());
            while (q--){
                cin >> x;
                // version 1
                // int ans = 0;
                // auto it = lower_bound(a.begin(), a.end(), x);
                // int idx = it - a.begin();
                // int ans;
                // if (idx == n) ans = -1;
                // else if (a[idx] != x) ans = -1;
                // else ans = idx + 1;
                // if (ans == -1) cout<<x<<" not found"<<"\n";
                // else cout<<x<<" found at "<<ans<<"\n";
                int ans = -1;
                int l=0, r = n-1;
                while (l <= r){
                    int mid = l + (r-l)/2;
                    if (a[mid] == x){
                        ans = mid;
                        r = mid - 1;
                    }
                    else if (x > a[mid]){
                        l = mid + 1;
                    } else {
                        r = mid - 1;
                    }
                }
                if (ans == -1) cout<<x<<" not found"<<"\n";
                else cout<< x <<" found at "<< ans+1 <<"\n";
            }
        }
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
        // cou<<b.functionName(<<\n";
        ob.functionName();
    }
    return 0;
}