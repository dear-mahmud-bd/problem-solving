// https://codeforces.com/contest/1213/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int countBadDays() { 
        int n, badDays=0, minPrice;
        cin>>n;
        vector<int>prices(n);
        for (int i = 0; i < n; i++){
            cin>>prices[i];
        }
        minPrice = prices[n-1];
        for (int i = n-2; i >= 0; i--){
            if(minPrice < prices[i]) badDays++;
            else minPrice=prices[i];
        }
        return badDays;
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
        cout<<ob.countBadDays()<<"\n";
    }
    return 0;
}