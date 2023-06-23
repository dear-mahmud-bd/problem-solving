// https://www.codechef.com/START95D/problems/BOX95 
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long totalEnergy() { 
        int n, m, h;
        cin >> n >> m >> h;
        vector<long long> cars(n);
        vector<long long> outlets(m);
        for (int i = 0; i < n; i++) {
            cin >> cars[i];
        }
        sort(cars.begin(), cars.end(), [](int a, int b) {return a > b;});
        for (int i = 0; i < m; i++) {
            cin >> outlets[i];
        }
        sort(outlets.begin(), outlets.end(), [](int a, int b) {return a > b;});
        long long maxEnergy = 0;
        int carIdx = 0;
        int outletIdx = 0;
        int loop = (n>=m) ? m:n; 
        while (loop--) {
            long long now = (outlets[outletIdx]*h) <=cars[carIdx] ? outlets[outletIdx]*h:cars[carIdx];
            maxEnergy += now;
            carIdx++;
            outletIdx++;
        }
        return maxEnergy;
    } 
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.totalEnergy()<<"\n";
    }
    return 0;
}