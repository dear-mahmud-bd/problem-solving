// https://www.spoj.com/problems/OLOLO/en/
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int help() { 
        int n, pyani;
        cin >> n;
        int result = 0;
        for (int i = 0; i < n; i++) {
            cin >> pyani;
            result ^= pyani;
        }
        return result;
    } 
};
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.help()<<"\n";
    }
    return 0;
}