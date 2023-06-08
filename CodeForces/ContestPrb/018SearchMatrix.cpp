// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, M, X, flag=0;
    cin>>N>>M;
    int a[N][M];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin>>a[i][j];
        }
    }
    cin>>X;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if(X==a[i][j])flag=1;
        }
    }
    if(flag==0) cout<<"will take number\n";
    else cout<<"will not take number\n";
    return 0;
}