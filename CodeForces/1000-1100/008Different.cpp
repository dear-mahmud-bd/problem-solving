// https://codeforces.com/contest/1772/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void maxPossibleElement() { 
        int k, n, start=1, diff=1;
        cin>>k>>n;
        for (int i = 1; i <= k; i++){
            cout<<start<<" ";
            if((n-start-diff) >= (k-i-1)){
                start += diff;
                diff++;
            }else {
                start++;
            }
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
        ob.maxPossibleElement();
    }
    return 0;
}