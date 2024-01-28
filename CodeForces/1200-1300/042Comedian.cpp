// https://codeforces.com/contest/1792/problem/B
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
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a==0){
            if(b>0 || c>0 || d>0) return 1;
            else return 0;
        }
        int totalJokes = a;
        if(b>c) swap(b,c);
        totalJokes += 2*b;
        c -= b;
        totalJokes += min(a+1, c+d);
        return totalJokes;
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