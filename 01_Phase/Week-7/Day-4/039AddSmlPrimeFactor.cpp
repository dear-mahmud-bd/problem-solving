// https://www.codechef.com/problems/PRIMEFACT
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int smallestPrimeFactor(int n) {
        for (int i = 2; i*i <= n; i++) {
            if (n%i == 0) return i;
        }
        return n;
    }
    int minimumTimeInSecound() { 
        int init_Score, req_Score;
        cin >> init_Score >> req_Score;
        int smallestFactor = smallestPrimeFactor(init_Score);
        init_Score += smallestFactor;
        int currentTime = 1;
        req_Score = req_Score-init_Score;
        if(req_Score%2==1){
            return currentTime+(req_Score/2)+1;
        }else{
            return currentTime+(req_Score/2);
        }
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
        cout<<ob.minimumTimeInSecound()<<"\n";
    }
    return 0;
}