// https://codeforces.com/problemset/problem/1604/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n, ele, count=0;
        cin>>n;
        for (int i=1, j=1; i<=n; i++,j++){
            cin>>ele;
            if(ele>j) {
                count = ele-j+count;
                j = ele;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}