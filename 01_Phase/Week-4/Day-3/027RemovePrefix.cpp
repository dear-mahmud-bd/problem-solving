// https://codeforces.com/contest/1714/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int totalRemovingElement() { 
        int n;
        cin >> n;
        vector<int> a(n+1);
        vector<bool> cnt(n+1, false);
        for (int i=1; i<=n; i++) {
            cin >> a[i];
        }
        for (int i=n; i>0; i--) {
            if(cnt[a[i]]) return i;
            cnt[a[i]] = true;
        }
        return 0;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.totalRemovingElement()<<"\n";
    }
    return 0;
}