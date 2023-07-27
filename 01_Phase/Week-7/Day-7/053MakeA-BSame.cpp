// https://www.codechef.com/problems/MAKE_AB_SAME
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string canConvertArrays() { 
        int n, cntA = 0, cntB = 0;
        cin >> n;
        vector<int> A(n), B(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            if (A[i] == 1) cntA++;
        }
        for (int i = 0; i < n; i++) {
            cin >> B[i];
            if (B[i] == 1) cntB++;
        }
        if ((A[0]!=B[0])||(A[n-1]!=B[n-1])||(cntA==0&&cntB>0)||(cntB==0&&cntA>0)){
            return "NO";
        }
        for (int i = 0; i < n; i++) {
            if (A[i]!=0 && B[i]==0) return "NO";
        }
        return "YES";
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.canConvertArrays()<<"\n";
    }
    return 0;
}