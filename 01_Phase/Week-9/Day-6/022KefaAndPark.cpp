// https://codeforces.com/contest/580/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 1e5+6;
int n, cat, reach=0;
vector<int> adj_list[N];
vector<int>catIndex(N), totalUsed(N);
vector<bool> visited(N);
void dfs(int node){
    visited[node] = true;
    if(catIndex[node]==1 && node==1){
        totalUsed[node] = 1;
    }
    for(int adj_node: adj_list[node]){
        if(!visited[adj_node]){
            if(catIndex[node]==1 && catIndex[adj_node]==1){
                totalUsed[adj_node] = totalUsed[node]+1;
            }else if(catIndex[adj_node]==1){
                totalUsed[adj_node] = 1;
            }else{
                totalUsed[adj_node] = 0;
            }
            if(totalUsed[adj_node] > cat){
                visited[adj_node]=true;
                continue;
            }
            if(adj_list[adj_node].size() == 1){
                visited[adj_node] = true;
                reach++;
                continue;
            }
            dfs(adj_node);  
        }
    }
}
class Solution{
    public:
    void functionName() { 
        cin>>n>>cat;
        for (int i = 1; i <= n; i++){
            cin>>catIndex[i];
        }
        for (int i = 1; i <= n-1; i++){
            int u, v;
            cin>>u>>v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        dfs(1);
        cout<<reach<<"\n";
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