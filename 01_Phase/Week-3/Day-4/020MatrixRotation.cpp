// https://codeforces.com/contest/1772/problem/B
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isBeautifulMatrix(int a, int b, int c, int d) {
        return a<b && a<c && c<d && b<d;
    }
    bool isPossible(int a, int b, int c, int d) {
        bool first= isBeautifulMatrix(a, b, c, d);
        bool secound = isBeautifulMatrix(c, a, d, b);
        bool third = isBeautifulMatrix(d, c, b, a);
        bool forth = isBeautifulMatrix(b, d, a, c);
        return first||secound||third||forth;
    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (ob.isPossible(a, b, c, d)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}