// https://codeforces.com/contest/1809/problem/C
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
    void functionName() { 
        int n, k, k_i, sum, extra;
        cin>>n>>k;
        if(k==0){
            for (int i = 0; i < n; i++){
                cout<<-1<<" ";
            }
            cout<<"\n";
            return;
        }
        for (int i = 1; i <= n; i++){
            if((i*(i+1))/2 <= k) k_i=i;
            else break;
        }
        sum = (k_i*(k_i+1))/2;
        extra = k - sum;
        for (int i = 1; i <= n; i++){
            if(i==k_i+1){
                if(extra==0) cout<<"-1000 ";
                else cout<< -(((k_i-extra+1)*2)-1) <<" ";
            }else if (i > k_i+1){
                cout<<"-1000 ";
            }else{
                cout<<"2 ";
                // cout<<i<<" ";
            }
        }
        cout<<"\n";
        return;
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
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}