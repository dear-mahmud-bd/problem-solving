// https://atcoder.jp/contests/abc162/tasks/abc162_c?lang=en
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int threeGCD() {
        int K;
        cin >> K;
        long long result = 0;
        for (int a = 1; a <= K; a++) {
            for (int b = 1; b <= K; b++) {
                for (int c = 1; c <= K; c++) {
                    result += gcd(gcd(a, b), c);
                }
            }
        }
        return  result;
    } 
};
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.threeGCD()<<"\n";
    }
    return 0;
}