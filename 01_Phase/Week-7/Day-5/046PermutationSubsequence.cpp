// https://www.codechef.com/problems/PERMSUBSEQ
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll MOD=1000000007;
class Solution{
    public:
    ll numOfSubSequence() { 
        ll N, ele, count=0;
        cin>>N;
        unordered_map<ll,ll>freq;
        for (ll i = 0; i < N; i++){
            cin>>ele;
            freq[ele-1]++;
        }
        for (ll i = 0; i < N; i++){
            if(i==0 && freq[i]==0){
                return count;
            }else if(i!=0){
                freq[i] = (freq[i-1]*freq[i])%MOD;
            }
            count += freq[i];
            count %= MOD;
        }
        return count;
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
        cout<<ob.numOfSubSequence()<<"\n";
    }
    return 0;
}