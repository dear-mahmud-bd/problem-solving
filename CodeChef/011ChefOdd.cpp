// https://www.codechef.com/problems/CHEFODD
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string canPartitionSet() { 
        ll N, K;
        cin >> N >> K;
        if (N < 2*K) {
            return "NO";
        } else {
            ll remainingOdd = (N+1) / 2;
            remainingOdd -= K;
            if (remainingOdd%2 == 0) {
                return "YES";
            } else {
                return "NO";
            }
        }
    }
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.canPartitionSet()<<"\n";
    }
    return 0;
}