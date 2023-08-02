// https://codeforces.com/contest/1642/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
const int N = 2e6+6;
using namespace std;
class Solution{
    public:
    int howManyNumber() { 
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        unordered_map<ll,int> freq;
        int count = n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            ll val = a[i]*x;
            if(freq[val]>0 && freq[a[i]]>0) {
                count-=2;
                freq[val]--;
                freq[a[i]]--;
            }
        }
        return count;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.howManyNumber()<<"\n";
    }
    return 0;
}