// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;
int maximumSumSubarray(int k, int a[], int n){
    long long int i=0, j=0, sum=0, mx=INT_MIN;
    while (j<n){
        sum += a[j];
        if(j<k-1) {
            j++;
        } else {
            mx = max(sum,mx);
            sum -= a[i];
            i++;
            j++;
        }
    }
    return mx;
}
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans = maximumSumSubarray(k, a, n);
    cout<<ans<<"\n";
    return 0;
}