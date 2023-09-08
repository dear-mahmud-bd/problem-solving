// https://codeforces.com/problemset/problem/1772/D
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int functionName() { 
        int n, low=0, high=1e9;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for (int i = 0; i < n-1; i++){
            if(arr[i]==arr[i+1]){
                // (0, infinity) or (low, high)
                continue;
            }else if(arr[i] > arr[i+1]){
                // (floor, infinity) or (low, infinity) or (low, high)
                low = max(low, (arr[i]+arr[i+1]+1)/2);
            }else{
                // (0, floor) or (0, high) or (low, high)
                high = min(high, (arr[i]+arr[i+1])/2);
            }
        }
        // return low<=high ? high:-1;
        return low<=high ? low:-1;
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
    }
    return 0;
}