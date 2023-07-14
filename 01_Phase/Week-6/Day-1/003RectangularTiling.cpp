// https://www.codechef.com/problems/RCT
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string functionName() { 
        int W, L;
        cin >> W >> L;
        if ((W*L)%2 == 0) return "YES";
        else return "NO";
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.functionName()<<"\n";
    }
    return 0;
}