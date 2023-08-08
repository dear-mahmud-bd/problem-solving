// https://codeforces.com/problemset/problem/1364/B 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void minSize() { 
        int n, ele, flag=0;
        cin>>n;
        vector<int> ar;
        for (int i = 0; i < n; i++){
            cin>>ele;
            ar.push_back(ele);
        }
        vector<int> subseq;
        subseq.push_back(ar[0]);
        for (int i = 1; i < n; i++){
            if(ar[i-1] > ar[i] && flag!=1){
                if(flag==-1) subseq.push_back(ar[i-1]);
                flag=1;
            }else if(ar[i-1] < ar[i] && flag!=-1){
                if(flag==1)subseq.push_back(ar[i-1]);
                flag=-1;
            }
        }
        subseq.push_back(ar[n-1]);
        cout<<subseq.size()<<"\n";
        for (int i = 0; i < subseq.size(); i++){
            cout<<subseq[i]<<" ";
        }
        cout<<"\n";
        return;
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
        ob.minSize();
    }
    return 0;
}