// https://codeforces.com/contest/1690/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string canTransformArrays() {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        bool transformationPossible = true;
        int maxDifference = a[0] - b[0];
        int lastZeroIndex = 0;
        for (int i = 0; i < n; i++) {
            if (b[lastZeroIndex] == 0) {
                if (b[i] == 0) {
                    maxDifference = max(a[i]-b[i], maxDifference);
                    lastZeroIndex = i;
                } else {
                    if (a[i] - b[i] >= maxDifference) {
                        maxDifference = a[i] - b[i];
                        lastZeroIndex = i;
                    } else {
                        transformationPossible = false;
                        break;
                    }
                }
            } else {
                if (b[i] == 0) {
                    if (a[i] - b[i] > maxDifference) {
                        transformationPossible = false;
                        break;
                    }
                } else {
                    if (a[i] - b[i] != maxDifference) {
                        transformationPossible = false;
                        break;
                    }
                }
            }
        }
        if (transformationPossible && maxDifference >= 0)
            return "YES";
        else
            return "NO";
    }
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.canTransformArrays()<<"\n";
    }
    return 0;
}