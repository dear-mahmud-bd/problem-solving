// https://codeforces.com/problemset/problem/1741/D
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int howMany(vector<int>& arr, int left, int right){
        if(right-left == 1) return 0;
        int mid = (right+left) >> 1, rotated=0;
        int maxLeft = *max_element(arr.begin()+left, arr.begin()+mid);
        int maxRight = *max_element(arr.begin()+mid, arr.begin()+right);
        if(maxRight < maxLeft){
            rotated++;
            for (int i = 0; i < (mid-left); i++){
                swap(arr[left+i],arr[mid+i]);
            }
        }
        return howMany(arr, left, mid)+howMany(arr, mid, right)+rotated;
    }
    int minOperationToMakeBeautiful() { 
        int m;
        cin>>m;
        vector<int>arr(m);
        for (int i = 0; i < m; i++){
            cin>>arr[i];
        }
        int ans = howMany(arr,0,m);
        if(is_sorted(arr.begin(), arr.end())){
            return ans;
        }else{
            return -1;
        }
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
        cout<<ob.minOperationToMakeBeautiful()<<"\n";
    }
    return 0;
}