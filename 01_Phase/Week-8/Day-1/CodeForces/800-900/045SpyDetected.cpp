// https://codeforces.com/contest/1512/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    int findUniqueIndex() { 
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int findIdx=-1, difEle = arr[0];
        for (int i = 1; i < n; i++) {
            if (difEle == arr[i]) continue;
            else if (difEle!=arr[1] && arr[1]!=arr[2]) findIdx=2;
            else if (difEle!=arr[1] && arr[1]==arr[2]) findIdx=1;
            else findIdx=i+1;
            break;
        }
        return findIdx;
    }
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.findUniqueIndex()<<"\n";
    }
    return 0;
}