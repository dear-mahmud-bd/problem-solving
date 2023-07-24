// https://www.codechef.com/problems/BETDEAL
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string functionName() { 
        int a, b;
        cin >> a >> b;
        int frst_Str = 100-a;
        int scnd_Str = 200-(2*b);
        if (frst_Str < scnd_Str) return "FIRST";
        else if (frst_Str > scnd_Str) return "SECOND";
        else return "BOTH";
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
        cout<<ob.functionName()<<"\n";
    }
    return 0;
}