// https://codeforces.com/contest/1821/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
const int MOD = 1e9+7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int operation(int num){
        int cnt = 0;
        while (num > 0){
            num = num/2;
            cnt++;
        }
        return cnt;  
    }
    int functionName() { 
        string str;
        cin>>str;
        int ans = str.size();
        for(int i = 0; i < 26; i++){
            char ch =('a'+i);
            int len=0, res=0;
            for(int j = 0; j < str.size(); j++){
                if(str[j]==ch){
                    res = max(res, len);
                    len = 0;
                } else {
                    len++;
                }   
            }
            res = max(res, len);
            // cout<<"\n"<<ch<<"->"<<res<<"\n";
            ans = min(ans, res);
        }
        return operation(ans);
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
        // ob.functionName();
    }
    return 0;
}