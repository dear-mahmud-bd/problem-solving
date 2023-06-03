#include<bits/stdc++.h>
using namespace std;

const int N =1e5;
int visited[N];
int level[N];
vector<int>adj_list[N];

void bfs(int src){
    queue<int>q;

    visited[src] = 1;
    level[src] = 0;
    q.push(src);

    while (!q.empty()){
        int head = q.front();
        q.pop();
        for (int adj_node: adj_list[head]){
            if (!visited[adj_node]) {
                visited[adj_node] = 1;
                level[adj_node] = level[head]+1;
                q.push(adj_node);
            }
        }
    }
}
int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for (int i=0; i<edges; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int romeo, juliet, dis;
    cin>>romeo>>juliet>>dis;
    bfs(romeo);

    float stay = (float)level[juliet]/2.00;
    int distance = (float) dis;
    
    if(distance >= stay && level[juliet]!=0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}