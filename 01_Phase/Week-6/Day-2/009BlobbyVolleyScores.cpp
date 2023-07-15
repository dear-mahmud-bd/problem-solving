// https://www.codechef.com/problems/BLOBBYVOLLEY
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void calculateScores() { 
        int N;
        cin >> N;
        string S;
        cin >> S;
        int aliceScore = 0;
        int bobScore = 0;
        char server = 'A';
        bool aFlg=true, bFlg=false;
        for (int i = 0; i < N; i++) {
            if (S[i]=='A' && aFlg) {
                server = 'A';
                aliceScore++;
                continue;
            }
            if (S[i]=='B' && bFlg) {
                server = 'B';
                bobScore++;
                continue;
            }
            if (S[i]=='B' && !bFlg){
                server = 'B';
                aFlg = false;
                bFlg = true;
                continue;
            }
            if (S[i]=='A' && !aFlg){
                server = 'B';
                bFlg = false;
                aFlg = true;
                continue;
            }
        }
        cout<<aliceScore<<" "<<bobScore<<"\n";
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        ob.calculateScores();
    }
    return 0;
}