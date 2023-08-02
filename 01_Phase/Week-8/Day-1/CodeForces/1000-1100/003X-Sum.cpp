// https://codeforces.com/contest/1676/problem/D
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int xSum() { 
        int n, m;
        cin >> n >> m;
        int board[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[i][j];
            }
        }
        int maxSum = 0, innerSum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = 0;
                sum += board[i][j];
                // Attack cells on the diagonal from top-left to bottom-right
                int x = i + 1, y = j + 1;
                while (x < n && y < m) {
                    sum += board[x][y];
                    x++;
                    y++;
                }
                innerSum = sum;
                // Attack cells on the diagonal from top-right to bottom-left
                sum = 0;
                x = i + 1, y = j - 1;
                while (x < n && y >= 0) {
                    sum += board[x][y];
                    x++;
                    y--;
                }
                innerSum += sum;
                // Attack cells on the diagonal from bottom-left to top-right
                sum = 0;
                x = i - 1, y = j + 1;
                while (x >= 0 && y < m) {
                    sum += board[x][y];
                    x--;
                    y++;
                }
                innerSum += sum;
                // Attack cells on the diagonal from bottom-right to top-left
                sum = 0;
                x = i - 1, y = j - 1;
                while (x >= 0 && y >= 0) {
                    sum += board[x][y];
                    x--;
                    y--;
                }
                innerSum += sum;
                maxSum = max(maxSum, innerSum);
            }
        }
        return maxSum;
    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        Solution ob;
        cout<<ob.xSum()<<"\n";
    }
    return 0;
}