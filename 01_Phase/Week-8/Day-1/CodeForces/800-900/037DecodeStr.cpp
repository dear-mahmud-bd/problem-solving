// https://codeforces.com/contest/1729/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    string decode() { 
        int codeLength;
        string encodedStr, decodedStr;
        cin >> codeLength >> encodedStr;
        for (int i = codeLength - 1; i >= 0; i--) {
            if (encodedStr[i] == '0') {
                int currentDigit = (encodedStr[i - 1] - '0') + ((encodedStr[i - 2] - '0') * 10);
                decodedStr += char(currentDigit + 96);
                i -= 2;
            } else {
                int currentDigit = encodedStr[i] - '0';
                decodedStr += char(currentDigit + 96);
            }
        }
        reverse(decodedStr.begin(), decodedStr.end());
        return decodedStr;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.decode()<<"\n";
    }
    return 0;
}