// https://codeforces.com/problemset/problem/467/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int potentialFriends() { 
        int n, m, k;
        cin >> n >> m >> k;
        int a[m + 1];
        int count = 0;
        for (int i = 0; i <= m; i++){
            cin >> a[i];
        }
        for (int i = 0; i < m; i++){
            if (__builtin_popcount(a[i]^a[m]) <= k) count++;
        }
        return count;
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
        cout<<ob.potentialFriends()<<"\n";
    }
    return 0;
}