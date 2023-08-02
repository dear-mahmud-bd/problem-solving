// https://codeforces.com/contest/1790/problem/D
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int numOfSet() { 
        int n;
        cin >> n;
        vector<int> matryoshkas(n);
        for (int i = 0; i < n; i++) {
            cin >> matryoshkas[i];
        }
        sort(matryoshkas.begin(), matryoshkas.end());

        int minSets = 0;
        int prevSize = 0;
        int currentSetSize = 0;
        int maxSetSize = 0;
        int currentSize = 0;

        for (int i = 0; i < n; i++) {
            currentSize = matryoshkas[i];

            if (currentSize > prevSize) {
                maxSetSize = (currentSize - prevSize < 2) ? currentSetSize : 0;
                currentSetSize = 0;
            }

            currentSetSize++;
            minSets += (currentSetSize > maxSetSize);
            prevSize = currentSize;
        }

        return minSets;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.numOfSet()<<"\n";
    }
    return 0;
}