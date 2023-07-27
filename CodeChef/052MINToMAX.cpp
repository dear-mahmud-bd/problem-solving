// https://www.codechef.com/problems/OPMIN
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minOperationsToMax() { 
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int minVal = *min_element(arr.begin(), arr.end());
        int count = 0;
        for (int num : arr) {
            if (num != minVal) {
                count++;
            }
        }
        return count;
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
        cout<<ob.minOperationsToMax()<<"\n";
    }
    return 0;
}