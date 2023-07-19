// https://www.codechef.com/problems/LARGESECOND
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int maxSumOfTwoDistinctIntegers() { 
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int maxSum = 0;
        for (int i = n-1; i >= 0; i--) {
            if (arr[i] != arr[i-1]) {
                maxSum = arr[i] + arr[i-1];
                break;
            }
        }
        return maxSum;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.maxSumOfTwoDistinctIntegers()<<"\n";
    }
    return 0;
}