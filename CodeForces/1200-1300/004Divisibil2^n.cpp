// https://codeforces.com/contest/1744/problem/D
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minmumOperation() { 
        ll n, multi=1, count=0;
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            multi *= a[i];
        }
        ll rem = pow(2,n), loop=1e5;

        while(loop--){
            if(multi%rem == 0) return count;
            multi = 1;
            for (int i = 1; i <= n; i++){
                a[i] *= i;
                multi *= a[i];
            }
            count++;
            // if(multi%rem == 0) return count;
        }
        return -1;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.minmumOperation()<<"\n";
    }
    return 0;
}