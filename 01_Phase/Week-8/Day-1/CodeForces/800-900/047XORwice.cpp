// https://codeforces.com/problemset/problem/1421/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minXOR() { 
        int a, b;
        cin>>a>>b;
        return a^b;
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
        cout<<ob.minXOR()<<"\n";
    }
    return 0;
}