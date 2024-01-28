// https://codeforces.com/contest/1837/problem/D
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
    void functionName() { 
        int n, f=0, s=0;
        cin>>n;
        string str;
        cin>>str;
        for (int i = 0; i < str.length(); i++){
            if(str[i] == '(') f++;
            else s++;
        }
        if(f != s){
            cout<<-1<<"\n";
            return;
        }
        bool flag1=false, flag2=false;
        stack<int>st;
        vector<int>ans(n,2);
        if(str[0]=='('){
            for (int i = 0; i < n; i++){
                if(str[i]=='('){
                    st.push(i);
                }else if (str[i]==')' && !st.empty()){
                    ans[i] = 1;
                    ans[st.top()] = 1;
                    st.pop();
                }
            }
        }else{
            for (int i = 0; i < n; i++){
                if(str[i]==')'){
                    st.push(i);
                }else if (str[i]=='(' && !st.empty()){
                    ans[i] = 1;
                    ans[st.top()] = 1;
                    st.pop();
                }
            }
        }
        for (int i = 0; i < n; i++){
            if(ans[i]==1) flag1=true;
            else if (ans[i]==2) flag2=true;
        }
        cout << (flag1&&flag2 ? 2:1) << "\n";
        for (int i = 0; i < n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        return ;
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
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}