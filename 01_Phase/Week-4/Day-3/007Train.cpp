// https://codeforces.com/contest/1702/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void isPossible() { 
        int n, k, ele, a, b;
        cin >> n >> k;
        map<int, vector<int>>position;
        for (int i = 1; i <= n; i++){
            cin>>ele;
            position[ele].push_back(i);
        }
        for (int i = 0; i < k; i++){
            cin >> a >> b;
            if(!position.count(a) || !position.count(b)){
                cout<<"NO\n";
            }else if(upper_bound(position[b].begin(),position[b].end(), position[a][0]) == position[b].end()){
                cout<<"NO\n";                
            }else{
                cout<<"YES\n";
            }
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
        ob.isPossible();
    }
    return 0;
}