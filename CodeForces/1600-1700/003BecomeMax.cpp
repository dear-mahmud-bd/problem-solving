// https://codeforces.com/contest/1856/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
const int MOD = 1e9+7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int n, k;
vector<int>arr;
class Solution{
    public:
    bool isPossible(int mid) {
        for (int i = 1; i <= n; i++) {
            int ttlOperations = 0;
            for (int j = i; j <= n; j++) {
                if (arr[j] < mid+i-j) ttlOperations += mid+i-j-arr[j];
                else if (ttlOperations <= k) return true;
                if (ttlOperations > k) break;
            }
        }
        return false;
    }
    int functionName() { 
        cin >> n >> k;
        arr.resize(n + 1);
        for (int i = 1; i <= n; i++){
            cin>>arr[i];
        }
        int left = 0, right = 2e8;
        while (left < right) {
            cout<<" left ="<<left<<", right ="<<right<<"\n";
            int mid = (left + right + 1) >> 1;
            if (isPossible(mid)) left = mid;
            else right = mid - 1;
        }
        return left;
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
        cout<<ob.functionName()<<"\n";
        // ob.functionName();
    }
    return 0;
}