// https://codeforces.com/contest/1692/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        int n, ele;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;i++){
            cin>>ele;
            st.insert(ele);
        }
        // if( (n%2==0 && st.size()%2==0) || (n%2==1 && st.size()%2==1) )
        if( (n-st.size())%2 == 0 ) cout << st.size() << "\n";
        else cout << st.size()-1 << "\n";
    }
    return 0;
}