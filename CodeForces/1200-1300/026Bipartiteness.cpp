// https://codeforces.com/contest/862/problem/B
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 1e5+4;
ll visited[N], color[N];
vector<ll>adj_list[N];
void dfs(ll node){
    visited[node] = 1;
    for(ll adj_node: adj_list[node]){
        if(visited[adj_node]==0){
            if(color[node]==1) {
                color[adj_node]=2;
            }else {
                color[adj_node]=1;
            }
            dfs(adj_node);
        }
    }
}
class Solution{
    public:
    ll functionName() { 
        ll n, color1=0, color2=0;
        cin>>n;
        for (ll i = 0; i < n-1; i++){
            ll u, v;
            cin>>u>>v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        color[1]=1;
        dfs(1);
        for (ll i = 1; i <= n; i++){
            if(color[i]==1) color1++;
            if(color[i]==2) color2++;
        }
        return (color1*color2)-(n-1);
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
    }
    return 0;
}