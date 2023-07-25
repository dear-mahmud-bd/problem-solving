// https://codeforces.com/contest/1213/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minCoin() { 
        int n, ele, evenCount=0, oddCount=0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ele;
            if(ele%2 != 0)oddCount++;
            else evenCount ++;
        }
        if(evenCount < oddCount) return evenCount;
        else return oddCount;
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
        cout<<ob.minCoin()<<"\n";
    }
    return 0;
}