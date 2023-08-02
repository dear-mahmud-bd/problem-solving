// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ans=0;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(arr[i]+1 == arr[j]){
                ans++;
                break;
            } 
        }
    }
    cout<<ans<<"\n";
    return 0;
}
