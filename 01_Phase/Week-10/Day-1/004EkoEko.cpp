// https://www.spoj.com/problems/EKO/fbclid=IwAR2CCiz_wINq8BicbHBIpecjLgIPJhb-_a5R7rwYC_8-7fO53V0rX_4qYlE
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 1e6 + 6;
ll a[N];
class Solution{
    public:
    bool solve(ll midH, ll n, ll woodAmount){
        ll collected = 0;
        for (ll i = 0; i < n; i++){
            if (a[i] > midH){
                collected += (a[i] - midH);
            }
        }
        if (collected >= woodAmount){
            return true;
        } else {
            return false;
        }
    }
    void functionName(){
        ll n, woodAmount, minH=0, maxH=-1, midH, minHeightToSetBlade=0;
        cin >> n >> woodAmount;
        for (ll i = 0; i < n; i++){
            cin >> a[i];
            maxH = max(maxH, a[i]);
        }
        while (minH <= maxH){
            midH = minH + (maxH-minH)/2;
            if (solve(midH, n, woodAmount)){
                minHeightToSetBlade = midH;
                minH = midH + 1;
            } else {
                maxH = midH - 1;
            }
        }
        cout << minHeightToSetBlade <<"\n";
        return;
    }
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--){
        Solution ob;
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}