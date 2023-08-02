// https://codeforces.com/contest/1758/problem/C
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void makeFunny() { 
        int n, x;
        cin>>n>>x;
        vector<int>arr(n+1,-1);
        vector<bool>mark(n+1,false);
        arr[1]=x, arr[n]=1;
        mark[1]=true, mark[x]=true;
        for (int i = 2; i <= n; i++){
            for (int j = i; j <= n; j+=i){
                if(mark[j]==false && i==j){
                    arr[i]=j;
                    mark[j]=true;
                    break;
                }else if(mark[j]==false && n%j==0){
                    arr[i]=j;
                    mark[j]=true;
                    break;
                }
            }
            if(arr[i]==-1){
                cout<<-1<<"\n";
                return;
            }
        }
        for (int i = 1; i <= n; i++){    
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
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
        ob.makeFunny();
    }
    return 0;
}