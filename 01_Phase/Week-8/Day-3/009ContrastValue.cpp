// https://codeforces.com/problemset/problem/1832/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int minSize() { 
        int n, ele, count=0, flag=0;
        cin>>n;
        vector<int> ar;
        for (int i = 0; i < n; i++){
            cin>>ele;
            ar.push_back(ele);
        }
        if(n==1) return 1;
        for (int i = 1; i < n; i++){
            if(ar[i-1] > ar[i] && flag!=1){
                count++;
                flag=1;
            }else if(ar[i-1] < ar[i] && flag!=-1){
                count++;
                flag=-1;
            }
        }
        return count+1;
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
        cout<<ob.minSize()<<"\n";
    }
    return 0;
}