// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include<bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    long long int i=0, j=0;
    vector<long long>ans;
    queue<long long>q;
    while (j<N){
        if(A[j]<0) q.push(A[j]);
        if(j<K-1) {
            j++;
        } else {
            if(q.empty()) ans.push_back(0);
            else ans.push_back(q.front());
            if(A[i]<0) q.pop();
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int N, K;
    cin>>N;
    long long int A[N];
    for (int i=0; i<N; i++){
        cin>>A[i];
    }
    cin>>K;
    vector<long long>ans = printFirstNegativeInteger(A, N, K);
    for (int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}