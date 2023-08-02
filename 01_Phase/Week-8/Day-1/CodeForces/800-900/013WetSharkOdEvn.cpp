// https://codeforces.com/problemset/problem/621/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int arr[n], sum=0;
    for (int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    if(sum%2 == 0){
        cout<<sum<<"\n";
        return 0;
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){
            cout<<sum-arr[i]<<"\n";
            break;
        }
    }
    return 0;
}