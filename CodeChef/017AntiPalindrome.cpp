// https://www.codechef.com/problems/ANTIPALINDR
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int minOpsToAntiPalndm() { 
        int length;
        cin >> length;
        string inputString;
        cin >> inputString;
        unordered_map<char, int> charFrequency;
        for (int i = 0; i < length; i++) {
            charFrequency[inputString[i]]++;
        }
        int evenCount = 0;
        int oddCount = 0;
        int oddTotal = 0;
        for (const auto& pair : charFrequency) {
            if (pair.second%2 == 0) {
                evenCount++;
            } else {
                oddCount++;
                oddTotal += pair.second;
            }
        }
        if (oddCount >= 2) {
            return 0;
        } else if ((oddTotal!=length && length%2==1 && oddCount==1)||(oddTotal==length && length%2==0 && oddCount==1)||(oddCount==0)) {
            return 1;
        } else {
            return 2;
        }
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.minOpsToAntiPalndm()<<"\n";
    }
    return 0;
}