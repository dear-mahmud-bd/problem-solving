// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
#include<bits/stdc++.h>
using namespace std;
int search(string pat, string txt) {
    int k=pat.size(), i=0, j=0;
    int patFreq[26]={0};
    int txtFr[26]={0};
    for(char c:pat){
        patFreq[c-'a']++;
    }
    int ans=0;
    while(j<txt.size()){
        txtFr[txt[j]-'a']++;
        if(j<k-1){
            j++;
        } else {
            bool flag=true;
            for(int v=0;v<26;v++){
                if(patFreq[v] != txtFr[v]){
                    flag=false;
                    break;
                }
            }
            if(flag) ans++;
            txtFr[txt[i]-'a']--;
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    string txt, pat;
    cin >> txt >> pat;
    int ans = search(pat, txt);
    cout<<ans<<"\n";
    return 0;
}
/* 
zbcoejuvpvaboyg
po

 */