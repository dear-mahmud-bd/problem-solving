// https://atcoder.jp/contests/abc121/tasks/abc121_d?lang=en
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long X_OR(long long num) {
        if(num%4 == 0) return num;
        if(num%4 == 1) return 1;
        if(num%4 == 2) return num + 1;
        return 0;
    }
};
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        long long A, B;
        cin >> A >> B;
        cout<<( ob.X_OR(A-1) ^ ob.X_OR(B) )<<"\n";
    }
    return 0;
}