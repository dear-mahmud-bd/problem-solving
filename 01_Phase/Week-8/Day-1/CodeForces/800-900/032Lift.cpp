// https://codeforces.com/contest/1729/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void elevators() { 
        int a, b, c;
        cin >> a >> b >> c;
        int dif1 = a-1, dif2 = abs(b-c) + c-1;
        if (dif1 < dif2) {
            cout << 1 << "\n";
        }else if (dif1 == dif2) {
            cout << 3 << "\n";
        }else{
            cout << 2 << "\n";
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
        ob.elevators();
    }
    return 0;
}