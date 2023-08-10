// https://codeforces.com/contest/1556/problem/B
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    int minSwaps() { 
        int n, num, totalCostOdd=0, totalCostEven=0, oddCount=0, evenCount=0, oddPos=0, evenPos=1;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (num & 1) {
                totalCostOdd += abs(oddPos - i);
                totalCostEven += abs(evenPos - i);
                oddPos += 2;
                evenPos += 2;
                oddCount++;
            } else {
                evenCount++;
            }
        }
        if (abs(oddCount-evenCount)>1) return -1;
        else if (oddCount > evenCount) return totalCostOdd;
        else if (evenCount > oddCount) return totalCostEven;
        else return min(totalCostOdd, totalCostEven);
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
        cout<<ob.minSwaps()<<"\n";
    }
    return 0;
}