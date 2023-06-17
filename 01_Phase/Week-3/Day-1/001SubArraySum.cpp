// https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> ar, long long k) {
    int n = ar.size(), i=0, j=0, ans=0;
    long long sum=0;
    while (j<n){
        sum += ar[j];
        if(sum>k){
            while (sum>k){
                sum -= ar[i];
                i++;
            }
        }
        if(sum==k) ans = max(ans,j-i+1);
        j++;
    }
    return ans;
}
int main(){
    int n;
    long long k;
    cin>>n>>k;
    vector<int>ar(n);
    for (int i=0; i<n; i++){
        cin>>ar[i];
    }
    cout<<longestSubarrayWithSumK(ar,k)<<"\n";
    return 0;
}