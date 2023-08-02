// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ele;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        cin>>ele;
        arr.push_back(ele);
    }
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            reverse(arr.begin(),arr.begin()+i);
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}