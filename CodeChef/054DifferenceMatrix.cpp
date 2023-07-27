// https://www.codechef.com/problems/MATDIF?tab=statement
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution{
    public:
    void constructMatrix() { 
        int N, f=1, s=2;
        cin >> N;
        vector< vector<int>> matrix(N, vector<int>(N, 0));
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if(f<=N*N){
                    matrix[i][j]=f;
                    f+=2;
                }else{
                    matrix[i][j]=s;
                    s+=2;
                }
            }
        }
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
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
        ob.constructMatrix();
    }
    return 0;
}