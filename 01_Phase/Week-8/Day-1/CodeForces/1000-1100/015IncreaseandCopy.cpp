// https://codeforces.com/contest/1426/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int howManyMoves() { 
        int targetSum;
        cin>>targetSum;
        int root = sqrt(targetSum);
        int rem = targetSum-root;
        if(rem%root == 0) rem /= root;
        else rem = rem/root +1;
        return rem+root-1;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.howManyMoves()<<"\n";
    }
    return 0;
}