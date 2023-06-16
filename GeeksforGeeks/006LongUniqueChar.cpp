// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longestKSubstr(string s, int k) {
        int i=0, j=0, n=s.size(), ans=-1, unq=0, frq[26]={0};
        while (j<n){
            char ch=s[j];
            if(frq[ch-'a']==0) unq++;
            frq[ch-'a']++;
            while (unq>k){
                char leftCh=s[i];
                frq[leftCh-'a']--;
                if(frq[leftCh-'a'] == 0) unq--;
                i++;
            }
            if(unq == k) ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};
int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    Solution ob;
    cout << ob.longestKSubstr(s, k) << "\n";
    return 0;
}