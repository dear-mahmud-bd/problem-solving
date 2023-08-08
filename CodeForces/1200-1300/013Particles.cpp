// https://codeforces.com/problemset/problem/1844/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    ll maxCrg() { 
        ll n , ele, oddCrg=0, evnCrg=0, mxCrg=INT_MIN;
        cin>>n;
        for (int i = 0; i < n; i++){
            cin>>ele;
            mxCrg = max(ele,mxCrg);
            if(ele <= 0) continue;
            else if(i%2==1) oddCrg+=ele;
            else evnCrg+=ele;  
        }
        if(mxCrg>=0) return max(mxCrg,max(evnCrg,oddCrg));
        else return mxCrg;
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
        cout<<ob.maxCrg()<<"\n";
    }
    return 0;
}