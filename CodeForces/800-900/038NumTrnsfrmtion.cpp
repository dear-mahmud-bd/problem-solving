// https://codeforces.com/contest/1674/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void numberTransform() { 
        int x, y;
        cin >> x >> y;
        if (y % x == 0) {
            cout<< 1 <<" "<< y/x <<"\n";
        } else {
            cout<< 0 <<" "<< 0 <<"\n";
        }
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.numberTransform();
    }
    return 0;
}