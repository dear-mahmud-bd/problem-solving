// https://codeforces.com/problemset/problem/1844/D
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    string minDistChar() { 
        int n;
        cin>>n;
        string str(n,'.');
        set<int>divisior;
        for (int i = 1; i*i <= n; i++){
            if(n%i==0){
                divisior.insert(i);
                divisior.insert(n/i);
            }
        }
        int jump=1;
        for (auto i:divisior){
            if(i>jump)break;
            jump++;
        }
        char currChar='a';
        vector<bool>visited(n,false);
        for (int i = 0; i < n; i++){
            if(visited[i]) continue;
            for (int j = i; j < n; j+=jump){
                visited[j]=true;
                str[j]=currChar;
            }
            currChar++;
        }
        return str;
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
        cout<<ob.minDistChar()<<"\n";
    }
    return 0;
}