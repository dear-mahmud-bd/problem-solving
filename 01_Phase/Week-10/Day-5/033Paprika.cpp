// https://codeforces.com/contest/1617/problem/C
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
    int functionName() { 
        int n, ele;
        cin>>n;
        vector<int>arr, need;
        vector<bool>visited(n+1, false);
        for (int i = 1; i <= n; i++){
            cin>>ele;
            if(ele<=n && !visited[ele]) visited[ele]=true;
            else arr.push_back(ele);
        }
        sort(arr.begin(), arr.end());
        for (int i = 1; i <= n; i++){
            if(!visited[i]) need.push_back(i);
        }
        for (int i = 0; i < arr.size(); i++){
            if(2*need[i] >= arr[i]) return -1;
        }
        return arr.size();
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