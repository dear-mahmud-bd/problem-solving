// https://codeforces.com/problemset/problem/1253/A
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
        int n, diff=0;
        cin >> n; 
        bool possible = true, region=true; 
        vector<int> a(n), b(n);
        int l=0, r=n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if(a[i] > b[i]) possible = false;
            if(possible && diff==0 && b[i]>a[i]){
                diff = b[i]-a[i];
                l=i;
            }else if(region && b[i]-a[i]!=diff){
                r=i;
                region = false;
            }
        }
        for (int i = l; i <= r; i++) {
            if(a[i] != b[i]){
                a[i] += diff;
                if(a[i] != b[i]){
                    possible = false;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if(a[i] != b[i]){
                possible = false;
                break;    
            }
        }
        return possible ? "YES":"NO";
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
        // ob.functionName();
    }
    return 0;
}