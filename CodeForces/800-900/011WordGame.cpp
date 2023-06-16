// https://codeforces.com/contest/1722/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--) {
        int n;
        cin >> n;
        vector<string> words[3];
        map<string, int> points;
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                string word;
                cin >> word;
                words[i].push_back(word);
                points[word]++;
            }
        }
        int guyPoints[3] = {0, 0, 0};
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                string word = words[i][j];
                int count = points[word];
                if (count == 1) {
                    guyPoints[i] += 3;
                } else if (count == 2) {
                    guyPoints[i] += 1;
                }
            }
        }
        for (int i=0; i<3; i++) {
            cout<<guyPoints[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}