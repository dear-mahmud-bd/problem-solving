// https://codeforces.com/contest/1858/problem/B
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
        /* int n, m, d, ans=0;
        cin>>n>>m>>d;
        vector<int>seller(m);
        map<int,int>eat;
        for (int i = 0; i < m; i++){
            cin>>seller[i];
        }
        for (int i = 0; i < m; i++){
            if(i==0){
                if(seller[i]-1 != 0){
                    if( (seller[i]-1)/d >= 1 ){
                        ans += ((seller[i]-1)/d) + ((seller[i]-1)%d!=0) ? 1:0;
                    }else{
                        ans += 1;
                    }
                }
            }else if(i == m-1){
                ans += ( (seller[i]-seller[i-1]) / d ) +  ( ( (seller[i]-seller[i-1])%d != 0) ? 1:0 );
            }else if(seller[i]-seller[i-1] < d){
                ans += 1;
            }else if(seller[i]-seller[i-1] >= d){
                ans += ( (seller[i]-seller[i-1]) / d ) +  ( ( (seller[i]-seller[i-1])%d != 0) ? 1:0 );
            } 
            eat[seller[i]] = ans;
        }
        ans += ((n-seller[m-1])/d)+1;
        eat[n+1] = ans;
        // cout<<ans<<"\n";
        map<int,int>mp;
        for (int i = 0; i < m; i++){
            int temp = ans;
            if(i==0){
                int before = ((seller[i+1]-1) / d) + (((seller[i+1]-1)%d != 0) ? 1:0);
                temp -= eat[seller[i+1]];
                temp += before;
            }else if(i==m-1){
                int after = ((n-seller[i-1]) / d) + 1;
                temp -= eat[n+1] - eat[seller[i-1]] ;
                temp += after;
            }else{
                int mid = ( (seller[i+1]-seller[i-1]) / d ) - ( (seller[i+1]-seller[i-1]) % d == 0 ? 1:0);
                temp -= ( eat[seller[i+1]] - eat[seller[i-1]] )  ;
                temp += mid+1;
            }
            mp[temp]++;
            // cout<<i<<" "<<temp<<"\n";
        }
        for (const auto& entry : mp) {
            cout<<entry.first<<" "<<entry.second<<"\n";
            break;
        } */


        ll n, m, d;
        cin >> n >> m >> d;
        vector<ll> positions(m);
        for (ll i = 0; i < m; i++) {
            cin >> positions[i];
        }
        sort(positions.rbegin(), positions.rend());
        if (positions[m - 1] != 1) {
            positions.push_back(1);
        }
        sort(positions.begin(), positions.end());
        
        ll previous = 0;
        ll count = 0;
        vector<ll> prefix(m+4, 0), suffix(m+4, 0);
        ll i = 0;

        for (auto x : positions) {
            ll difference = max(0ll, x - previous - 1);
            prefix[i++] = previous;
            count += difference / d;
            previous = x;
            count++;
        }
        ll tmp = max(0ll, n - previous);
        count += tmp / d;
        previous = n + 1;
        
        for (ll j = i - 1; j >= 0; j--) {
            suffix[j] = previous;
            previous = positions[j];
        }
        
        ll answer = 0;
        ll total = 0;
        for (ll j = 1; j < i; j++) {
            ll difference1 = max(0ll, positions[j] - prefix[j] - 1);
            ll c1 = difference1 / d;
            ll difference2 = max(0ll, suffix[j] - positions[j] - 1);
            ll c2 = difference2 / d;
            ll difference3 = max(0ll, suffix[j] - prefix[j] - 1);
            ll c3 = difference3 / d;
            if (c3 < (c1 + c2 + 1)) {
                total++;
            }
        }
        count -= (total != 0);
        if (total == 0) {
            total = m;
        }
        cout<<count<<" "<<total<<"\n";
        return;
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