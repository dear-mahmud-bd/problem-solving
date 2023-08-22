// https://codeforces.com/problemset/problem/1468/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void functionName() { 
        int q, type, spnd, nxtCstmrID = 1;
        cin >> q;
        priority_queue<pair<int,int>> mxSpndCstmrs;
        set<pair<int,int>> srvdCstmrID;
        // vector<int> srvdCstmrIDs;
        while(q--) {
            cin >> type;
            if(type == 1) {
                cin >> spnd;
                mxSpndCstmrs.push({spnd, -nxtCstmrID});
                srvdCstmrID.insert({nxtCstmrID, spnd});
                nxtCstmrID++;
            } else if (type == 2) {
                auto it = srvdCstmrID.begin();
                // srvdCstmrIDs.push_back(it->first);
                cout<<(it->first)<<" ";
                srvdCstmrID.erase(it);
            } else {
                int val = mxSpndCstmrs.top().first;
                int idx = abs(mxSpndCstmrs.top().second);
                mxSpndCstmrs.pop();
                if(srvdCstmrID.find({idx, val}) == srvdCstmrID.end()) {
                    while(true) {
                        val = mxSpndCstmrs.top().first;
                        idx = abs(mxSpndCstmrs.top().second);
                        mxSpndCstmrs.pop();
                        if(srvdCstmrID.find({idx, val}) != srvdCstmrID.end()) break;
                    }
                }
                // srvdCstmrIDs.push_back(idx);
                cout<<(idx)<<" ";
                srvdCstmrID.erase(srvdCstmrID.find({idx, val}));
            }
        }
        // for(auto srvdID : srvdCstmrIDs){
        //     cout<<srvdID<<" ";
        // }
        cout<<"\n";
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        ob.functionName();
    }
    return 0;
}