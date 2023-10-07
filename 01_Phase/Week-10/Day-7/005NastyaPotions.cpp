// https://codeforces.com/problemset/problem/1851/E
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 1e6+6;
vector<int>adj_list[N];
vector<ll>cost;
vector<bool>visited;
class Solution{
    public:
    void DFS(int curr_node){
        ll minCoin=0;
        visited[curr_node]=true;
        bool has_adjNode=false;
        for (auto  adj_node: adj_list[curr_node]){
            has_adjNode=true;
            if(!visited[adj_node]){
                DFS(adj_node);
            }
            minCoin+=cost[adj_node];
        }
        if(!has_adjNode) minCoin=INT64_MAX;
        cost[curr_node] = min(cost[curr_node], minCoin);
    }
    void minCoinsArr() { 
        ll n, k, kth, m, mth;
        cin>>n>>k;
        // clean everything...
        cost.assign(n+1,INT64_MAX);
        visited.assign(n+1,false);
        for (int i = 0; i < n+1; i++){
            adj_list[i].clear();
        }

        for (int i = 1; i < n+1; i++){
            cin>>cost[i];
        }
        for (int i = 1; i < k+1; i++){
            cin>>kth;
            cost[kth]=0;
        }
        for (int i = 1; i < n+1; i++){
            cin>>m;
            for (int j = 1; j < m+1; j++){
                cin>>mth;
                adj_list[i].push_back(mth);
            }
        }
        for (int i = 1; i < n+1; i++){
            if(!visited[i]) DFS(i);
        }
        for (int i = 1; i < n+1; i++){
            cout<<cost[i]<<" ";
        }
        cout<<"\n";
        return ;
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
        ob.minCoinsArr();
    }
    return 0;
}