// https://www.spoj.com/problems/INTEST/en/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, ele, count=0;
    cin>>n>>k;
    for (int i=0; i<n; i++){
        cin>>ele;
        if(ele%k == 0) count++;
    }
    cout<<count<<"\n";
    return 0;
}