// https://codeforces.com/problemset/problem/1774/B
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    string functionName() { 
        int n, m, k, maxFreq, maxEle;
        cin>>n>>m>>k;
        vector<int>colors(m);
        for (int i = 0; i < m; i++){
            cin>>colors[i];
        }
        if(n%k==0) maxFreq = n/k, maxEle = k;
        else maxFreq = (n/k)+1, maxEle = n%k;
        for (int i = 0; i < m; i++){
            if(colors[i]>maxFreq){
                maxEle = -1;
                break;
            }else if(colors[i]==maxFreq){
                maxEle--;
            }
        }
        return maxEle<0 ? "NO":"YES";
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
    }
    return 0;
}