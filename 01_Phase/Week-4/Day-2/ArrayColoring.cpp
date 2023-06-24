// https://codeforces.com/contest/1843/problem/0
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxCost() { 
        int i, n;
        cin >> n;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int sum = 0;
        i=0;
        while(i<n) {
            sum += (max(a[i],a[n-1]) - min(a[i],a[n-1]));
            i++;
            n--;
        }
        return sum;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.maxCost()<<"\n";
    }
    return 0;
}