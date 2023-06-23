// https://www.codechef.com/START95D/problems/ALTTAB
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string Alt_Tab() { 
        int n;
        cin>>n;
        string ans="";
        vector<string>str(n);
        for (int i=0; i<n; i++){
            cin>>str[i];
        }
        set<string>unq;
        for (int i=n-1; i>=0; i--){
            if(!unq.count(str[i])){
                unq.insert(str[i]);
                string lstTwoCh = str[i].substr(str[i].length()-2);
                ans += lstTwoCh;
            }
        }
        
        return ans;
    } 
};
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.Alt_Tab()<<"\n";
    }
    return 0;
}