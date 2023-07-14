// https://codeforces.com/contest/1741/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int thickness() { 
        int n;
        cin >> n;
        int minThickness = n;
        vector<int> sequence(n);
        for (int i = 0; i < n; i++) {
            cin >> sequence[i];
        }
        int count = 0, maxThickness = 0, num = sequence[0], sum = 0;
        bool foundSegment = false;
        for (int i = 0; i < n; i++) {
            foundSegment = false;
            sum += sequence[i];
            count++;
            int segmentSum = 0, segmentLength = 0;
            for (int j = i+1; j < n; j++) {
                segmentSum += sequence[j];
                segmentLength++;
                if (sum == segmentSum) {
                    maxThickness = max(maxThickness, segmentLength);
                    segmentLength = 0;
                    segmentSum = 0;
                    if (j == n-1) foundSegment = true;
                } else if (segmentSum > sum) {
                    break;
                }
            }
            maxThickness = max(count, maxThickness);
            if (foundSegment){
                minThickness = min(minThickness, maxThickness);
            }
            maxThickness = 0;
        }
        return minThickness;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.thickness()<<"\n";
    }
    return 0;
}