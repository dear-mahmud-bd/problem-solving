// https://codeforces.com/contest/1272/problem/B
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void sizeAndPath() { 
        string str, path="";
        cin>>str;
        int l=0, r=0, u=0, d=0;
        for (int i = 0; i < str.size(); i++){
            if(str[i] == 'L') l++;
            if(str[i] == 'R') r++;
            if(str[i] == 'U') u++;
            if(str[i] == 'D') d++;
        }
        int minX = min(l,r), minY = min(u,d);
        if(minX==0 && minY>1){
            cout<<2<<"\n"<<"DU\n";
            return;
        }
        if(minY==0 && minX>1){
            cout<<2<<"\n"<<"LR\n";
            return;
        }
        cout<< 2*(minX+minY)<<"\n";
        r=minX, u=minY, l=minX, d=minY;
        for (int i = 1; i <= 2*(minX+minY); i++){
            if(i<=r) {
                path+="R";
            }else if (i>r && i<=r+u){
                path+="U";
            }else if (i>r+u && i<=r+u+l){
                path+="L";
            }else{
                path+="D";
            }
        }
        cout<<path<<"\n";
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        Solution ob;
        ob.sizeAndPath();
    }
    return 0;
}