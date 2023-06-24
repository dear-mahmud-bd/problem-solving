// https://codeforces.com/contest/1843/problem/D
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
const int N =2e5+5;
int visited[N];
ll leaf_node[N];
vector<int>adj_list[N];
class Solution{
    public:
    void dfs(int node){
        visited[node] = 1;
        ll ans=0;
        bool last_leaf_node = true;
        for(int adj_node: adj_list[node]){
            if(visited[adj_node]==0){
                last_leaf_node=false;
                dfs(adj_node);
                ans += leaf_node[adj_node];
            }
        }
        if(last_leaf_node) leaf_node[node]=1;
        else leaf_node[node] = ans;
    }
    void solved() { 
        int nodes;
        cin>>nodes;
        int edges = nodes-1;
        for (int i = 0; i <= nodes+5; i++){
            visited[i] = 0;
        }
        for (int i = 0; i <= nodes+5; i++){
            leaf_node[i] = 0;
        }
        for (int i=0; i<edges; i++){
            int u, v;
            cin>>u>>v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        int src = 1;
        dfs(src);
        int query;
        cin>>query;
        while (query--){
            int x, y;
            cin>>x>>y;
            cout<<leaf_node[x]*leaf_node[y]<<"\n";
        }
        for (int i = 0; i <= nodes; i++){
            adj_list[i].clear();
        }
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.solved();
    }
    return 0;
}