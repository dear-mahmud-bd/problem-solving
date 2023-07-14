// https://www.codechef.com/problems/ONEFULPAIRS
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string isOnefulPair() { 
        int a, b, isOne;
        cin >> a >> b;
        isOne = a+b+(a*b);
        while (isOne){
            if(isOne%10 != 1) return "NO";
            isOne /= 10;
        }
        return "YES";
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.isOnefulPair()<<"\n";
    }
    return 0;
}