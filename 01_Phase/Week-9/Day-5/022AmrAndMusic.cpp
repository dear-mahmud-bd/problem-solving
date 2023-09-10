// https://codeforces.com/problemset/problem/507/A
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void functionName() { 
        int n, k, instrument=0, day=0;
        cin>>n>>k;
        vector<pair<int,int>> arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i].first;
            arr[i].second = i+1;
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++){
            if(arr[i].first+day <= k){
                instrument++;
                day += arr[i].first;
            }else{
                break;
            }
        }
        cout<<instrument<<"\n";
        for (int i = 0; i < instrument; i++){
            cout<< arr[i].second <<" ";
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
    // cin>>t;
    while(t--){
        Solution ob;
        ob.functionName();
    }
    return 0;
}