// https://codeforces.com/problemset/problem/1622/B
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
        int n;
        cin>>n;
        vector<int>p(n),q(n),one,zero;;
        for (int i = 0; i < n; i++){
            cin>>p[i];
        }
        string str;
        cin>>str;
        for (int i = 0; i < str.size(); i++){
            if(str[i]=='1')one.push_back(p[i]);
            else zero.push_back(p[i]);
        }
        sort(one.begin(), one.end());
        sort(zero.begin(), zero.end());
        unordered_map<int,int>mp;
        int zeroSize = zero.size();
        for (int i = 0; i < zeroSize; i++){
            mp[zero[i]-1] = i;
        }
        for (int i = 0; i < one.size(); i++){
            mp[one[i]-1] = zeroSize;
            zeroSize++;
        }
        for (int i = 0; i < n; i++){
            q[i] = mp[p[i]-1]+1;
        }
        for(auto it: q){
            cout<<it<<" ";
        }
        cout<<"\n";
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
        ob.functionName();
    }
    return 0;
}