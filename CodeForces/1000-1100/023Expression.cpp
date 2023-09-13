// https://codeforces.com/problemset/problem/479/A
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
        int a, b, c;
        cin >> a >> b >> c;
        return max({a+b+c, a*b*c, a*(b+c), (a+b)*c});;
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
        cout<<ob.functionName()<<"\n";
        // ob.functionName();
    }
    return 0;
}