// https://atcoder.jp/contests/abc213/tasks/abc213_a?lang=en
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int X_OR() { 
        int a,b;
        cin>>a>>b;
        return a^b;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.X_OR()<<"\n";
    }
    return 0;
}