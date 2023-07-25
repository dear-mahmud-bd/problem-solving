// https://www.codechef.com/problems/EQUALELE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int operations() { 
        int N;
        cin >> N;
        unordered_map<int, int> freq;
        int maxFreq = 0;
        int maxElement = -1;
        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;
            freq[num]++;
            if (freq[num] > maxFreq) {
                maxFreq = freq[num];
                maxElement = num;
            }
        }
        return N-maxFreq;
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
        cout<<ob.operations()<<"\n";
    }
    return 0;
}