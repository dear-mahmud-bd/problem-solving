// https://codeforces.com/contest/1814/problem/C
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
        int n, s1, s2, val;
        cin>>n>>s1>>s2;
        vector<pair<int,int>>arr;
        for (int i = 1; i <= n; i++){
            cin >> val;
            arr.push_back({val,i});
        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        vector<int>a, b;
        int t1=s1, t2=s2;
        for (int i = 0; i < n; i++){
            if(t1 < t2){
                a.push_back(arr[i].second);
                t1 += s1;
            }else{
                b.push_back(arr[i].second);
                t2 += s2;
            }
        }
        cout<<a.size()<<" ";
        for (int i = 0; i < a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        cout<<b.size()<<" ";
        for (int i = 0; i < b.size(); i++){
            cout<<b[i]<<" ";
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