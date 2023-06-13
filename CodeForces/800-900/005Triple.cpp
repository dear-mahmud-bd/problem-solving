// https://codeforces.com/problemset/problem/1669/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        int n, ele;
        cin>>n;
        vector<int>ar(n+5,0);
        for (int i=0; i<n; i++){
            cin>>ele;
            ar[ele]++;
        }
        bool found = false;
        for (int i=0; i<=n; i++){
            if(ar[i] >= 3){
                cout<<i<<"\n";
                found = true;
                break;
            }
        }
        if(!found) cout<<-1<<"\n";
    }
    return 0;
}