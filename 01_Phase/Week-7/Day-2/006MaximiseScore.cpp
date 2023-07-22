// https://www.codechef.com/problems/MAXIMSCORE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int functionName() { 
        int n, i, mi = INT_MAX;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < n; i++) {
            int x;
            if (i == 0) {
                x = max(abs(a[i] - a[i+1]), 0);
            } else if (i == n - 1) {
                x = max(abs(a[i] - a[i-1]), 0);
            } else {
                x = max(abs(a[i] - a[i-1]), abs(a[i] - a[i+1]));
            }
            mi = min(mi, x);
        }
        return mi;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.functionName()<<"\n";
    }
    return 0;
}