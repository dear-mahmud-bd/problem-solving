// https://codeforces.com/contest/1759/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minNumOfOperation() { 
        int l, r, x, a, b;
        cin>>l>>r>>x>>a>>b;
        if(a < b){
            if(b-a>=x) return 1;
            else if(r-b>=x || a-l>=x) return 2;
            else if(r-a>=x && b-l>=x) return 3;
            else return -1;
        }else if(a > b){
            if(a-b>=x) return 1;
            else if(r-a>=x || b-l>=x) return 2;
            else if(r-b>=x && a-l>=x) return 3;
            else return -1;
        }else{
            return 0;
        }
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.minNumOfOperation()<<"\n";
    }
    return 0;
}