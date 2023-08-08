// https://codeforces.com/problemset/problem/1851/D
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    string isValidPermutation() { 
        ll n, curr, totalSum, lastEle=0;
        cin>>n;
        totalSum = (n*n+n)/2;
        set<ll>st;
        for (ll i = 0; i < n-1; i++){
            cin>>curr;
            if(curr-lastEle <= n) st.insert(curr-lastEle);
            lastEle = curr;
        }
        return (st.size() == n-2+(lastEle!=totalSum)) ? "YES":"NO";
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
        cout<<ob.isValidPermutation()<<"\n";
    }
    return 0;
}