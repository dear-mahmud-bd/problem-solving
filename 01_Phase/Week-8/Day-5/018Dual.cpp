// https://codeforces.com/contest/1855/problem/C1
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void printOperation() { 
        int n, posCnt=0, negCnt=0, maxVal=INT_MIN, maxIndex=0;
        cin >> n;
        vector<int>arr(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            posCnt += arr[i] > 0;
            negCnt += arr[i] <= 0;
            if (arr[i] > maxVal) {
                maxVal = arr[i];
                maxIndex = i;
            }
        }
        if (posCnt == n) {
            cout<< n-1 <<"\n";
            for (int i = 2; i <= n; i++) {
                cout<< i <<" "<< i-1 <<"\n";
            }
        }else if (negCnt == n) {
            cout<< n-1 <<"\n";
            for (int i = n; i >= 2; i--) {
                cout<< i-1 <<" "<< i <<"\n";
            }
        }else{
            vector<pair<int, int>> operations;
            while (arr[maxIndex] <= 20) {
                arr[maxIndex] += arr[maxIndex];
                operations.push_back({maxIndex, maxIndex});
            }
            for (int i = 1; i <= n; i++) {
                operations.push_back({i, maxIndex});
                arr[i] += arr[maxIndex];
            }
            for (int i = 2; i <= n; i++) {
                arr[i] = arr[i] + arr[i-1];
                operations.push_back({i, i-1});
            }
            cout<<operations.size()<<"\n";
            for (auto op : operations) {
                cout<<op.first<<" "<<op.second<<"\n";
            }
            operations.clear();
        }
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
        ob.printOperation();
    }
    return 0;
}