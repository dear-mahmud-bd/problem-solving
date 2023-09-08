// https://codeforces.com/problemset/problem/1679/B
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void functionName() { 
        ll n, q, ele, t, idx, x, sum=0, convertedNum;
        cin>>n>>q;
        map<ll,ll>currVal;
        for (ll i = 0; i < n; i++){
            cin >> ele;
            currVal[i] = ele;
            sum += ele;
        }
        while (q--){
            cin>>t;
            if(t==2){
                cin>>x;
                currVal.clear();
                convertedNum = x;
                sum = x*n;
            }else{
                cin>>idx>>x;
                idx--;
                if(!currVal[idx]) {
                    currVal[idx] = convertedNum;
                } 
                sum -= currVal[idx];
                sum += x;
                currVal[idx] = x;
            }
            cout<<sum<<"\n";
        }
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
        ob.functionName();
    }
    return 0;
}