// https://codeforces.com/contest/1721/problem/C
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
        int n;
        cin>>n;
        vector<int>a(n), b(n), dmin(n), dmax(n);
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++){
            cin>>b[i];
        }
        list<int>lst;
        int ptr = n-1;
        for (int i = n-1; i >= 0; i--){
            while (ptr >= 0 && b[ptr] >= a[i]){
                lst.push_back(b[ptr]);
                ptr--;
            }
            dmin[i] = lst.back()-a[i];
            dmax[i] = lst.front()-a[i];
            int used_a = n-i;
            int used_b = n-(ptr+1);
            if(used_a==used_b) lst.clear();
        }
        for (int i = 0; i < n; i++){
            cout<<dmin[i]<<" ";
        }
        cout<<"\n";
        for (int i = 0; i < n; i++){
            cout<<dmax[i]<<" ";
        }
        cout<<"\n";
        return ;
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