// https://codeforces.com/contest/1692/problem/C
#include<bits/stdc++.h>
using namespace std;
pair<int, int> findBishopPosition(vector<string>CB) {
    for (int i=1; i<7; i++) {
        for (int j=1; j<7; j++) {
            if (CB[i][j]=='#' && CB[i+1][j+1]=='#' && CB[i-1][j-1]=='#' && CB[i+1][j-1]=='#' && CB[i-1][j+1]=='#') {
                return {i+1, j+1};
            }
        }
    }
    return {-1, -1}; 
}
int main(){
    int t;
    cin>>t;
    while (t--){
        vector<string> chessboard(8);
        for (int i=0; i<8; i++) {
            cin >> chessboard[i];
        }
        pair<int, int> bishopPosition = findBishopPosition(chessboard);
        cout<<bishopPosition.first<<" "<<bishopPosition.second<<"\n";  
    }
    return 0;
}