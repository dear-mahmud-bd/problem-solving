// https://www.codechef.com/problems/DOTIFYPLAY
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int lengthOfLongest() { 
        int N,K,L;
        cin>>N>>K>>L;
        multiset<int> playlist;
        for(int i = 0; i < N; i++){
            int minute, lang;
            cin>>minute>>lang;
            if(lang == L){
                playlist.insert(minute);
            }
        }
        if(playlist.size() >= K){
            int res = 0;
            auto it = playlist.rbegin();
            while(K--){
                res += *it;
                ++it;
            }
            return res;
        }else{
            return -1;
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
        cout<<ob.lengthOfLongest()<<"\n";
    }
    return 0;
}