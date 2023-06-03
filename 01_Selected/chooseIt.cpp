#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
const int M = 1005;

int dp[N][M];
int wt[N], val[N];

int knapsack(int n, int cap) {
    // 1. base case
    if(n == 0) return 0;

    // 2. if result is already calculated for this state return it
    if(dp[n][cap] != -1) return dp[n][cap];

    // 3. calculate result from smaller sub-problems
    if(cap < wt[n]) { // this is corner case...
        int ans = knapsack(n-1, cap);
        dp[n][cap] = ans;
        return ans;
    }

    int ans0 = val[n] + knapsack(n, cap - wt[n]);
    int ans1 = val[n] + knapsack(n - 1, cap - wt[n]);
    int ans2 = knapsack(n-1, cap);
    int ans = max({ans0, ans1, ans2});

    dp[n][cap] = ans;
    return ans;
}

int main() {
    int n, cap;
    cin >> n >> cap;

    for(int i = 1 ; i <= n ; i++) {
        cin >> val[i];
    }

    for(int i = 1 ; i <= n ; i++) {
        cin >> wt[i];
    }

    for(int i = 0 ; i <= n ; i++) {
        for(int j = 0 ; j <= cap ; j++) {
            dp[i][j] = -1;
        }
    }
    
    cout << knapsack(n, cap) << "\n";
    return 0;
}