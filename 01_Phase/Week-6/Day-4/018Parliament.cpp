// https://www.codechef.com/problems/PARLIAMENT
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string isResolutionPassed() { 
        int n, x;
        cin >> n >> x;
        if (x >= (n+1)/2) return "YES";
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
        cout<<ob.isResolutionPassed()<<"\n";
    }
    return 0;
}