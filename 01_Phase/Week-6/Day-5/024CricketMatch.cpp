// https://www.codechef.com/problems/CRICMATCH
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string canWin() { 
        int N, M;
        cin >> N >> M;
        if (N <= M*6*6) return "YES";
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
        cout<<ob.canWin()<<"\n";
    }
    return 0;
}