// https://codeforces.com/contest/1675/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int howManyOperation() { 
        int n, operation=0;
        cin>>n;
        vector<int>ar(n);
        for (int i = 0; i < n; i++){
            cin>>ar[i];
        }
        for (int i = n-2; i >= 0; i--){
            while(ar[i] >= ar[i+1]){
                ar[i] /= 2;
                operation++;
                if(i>0 && ar[i]==0) return -1;
            }
        }
        return operation;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.howManyOperation()<<"\n";
    }
    return 0;
}