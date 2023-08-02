// https://codeforces.com/contest/1118/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int howManyCandies() { 
        int n;
        cin >> n;
        vector<int>candyWeights(n);
        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            cin >> candyWeights[i];
            totalSum += candyWeights[i];
        }
        int sumOddDays = 0, sumEvenDays = 0;
        for (int i = 1; i < n; i += 2) {
            sumOddDays += candyWeights[i];
        }
        int goodCandies = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2) {
                sumOddDays = totalSum - sumEvenDays - candyWeights[i];
            } else {
                sumEvenDays = totalSum - sumOddDays - candyWeights[i];
            }
            if (sumEvenDays == sumOddDays) {
                goodCandies++;
            }
        }
        return goodCandies;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.howManyCandies()<<"\n";
    }
    return 0;
}