// https://www.codechef.com/problems/PALIXOR?tab=statement
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    bool isPalindrome(ll x){
        string s1 = to_string(x);
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        return s2==s1;
    }
    ll countPalindromePairs() {
        ll n, c, ans = 0;
        cin >> n;
        vector<ll> ar(n);
        vector<ll> palList;
        unordered_map<ll, ll> mp;
        for (ll i = 0; i < n; i++) {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        for (ll i = 0; i < 32769; i++) {
            if (isPalindrome(i)) palList.push_back(i);
        }
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < palList.size(); j++) {
                ll x = ar[i] ^ palList[j];
                if (x < 32769 && mp[x] > 0) ans += mp[x];
            }
        }
        return (ans + n) / 2;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout<<ob.countPalindromePairs()<<"\n";
    }
    return 0;
}