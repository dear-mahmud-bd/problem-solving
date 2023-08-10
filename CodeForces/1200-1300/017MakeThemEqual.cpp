// https://codeforces.com/contest/1594/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void minOperations() { 
        int n, last=0, flag=1;
        char c;
        cin >> n >> c;
        vector<char>ch(n+1);
        for (int i = 1; i <= n; i++){
            cin >> ch[i];
            if(c!=ch[i])flag=0;
            if(c==ch[i])last=i;
        }
        if(flag){
            cout<<0<<"\n";
        }else if(last > n/2){
            cout<<1<<"\n"<<last<<"\n";
        }else{
            cout<<2<<"\n"<<n-1<<" "<<n<<"\n";
        }
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
        ob.minOperations();
    }
    return 0;
}