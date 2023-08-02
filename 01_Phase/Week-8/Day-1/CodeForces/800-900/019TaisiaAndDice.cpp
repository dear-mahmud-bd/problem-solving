// https://codeforces.com/contest/1790/problem/B
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void functionName() { 
        int n, s, r; 
        cin>>n>>s>>r;
        int dice = s-r;
        cout<<dice<<" ";
        n--;
        while(r>0) {
            if(r-dice >= n-1) {
                cout<<dice<<" ";
                r -= dice;
                n--;
            } else {
                dice--;
            }
        }
        cout<<"\n";
        return ;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.functionName();
    }
    return 0;
}