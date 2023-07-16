// https://www.codechef.com/problems/THREEAPFREE
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
public:
    string ap_or_free(){
        int n;
        cin >> n;
        vector<int> seq(n);
        for (int i = 0; i < n; i++){
            cin >> seq[i];
        }
        for (int i = 0; i < n - 2; i++){
            for (int j = i + 1; j < n - 1; j++){
                for (int k = j + 1; k < n; k++){
                    if ((seq[j] - seq[i]) == (seq[k] - seq[j])){
                        return "NO";
                    }
                }
            }
        }
        return "YES";
    }
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        Solution ob;
        cout<<ob.ap_or_free()<<"\n";
    }
    return 0;
}