// https://codeforces.com/contest/1703/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        int n, ans=0;
        cin>>n;
        int freq[26]={0};
        for (int i=0; i<n; i++){
            char ch;
            cin >> ch;
            if(freq[ch-'A']==0){
                ans += 2;
            }else{
                ans++;
            }
            freq[ch-'A']++;
        }   
        cout<<ans<<"\n";
    }
    return 0;
}