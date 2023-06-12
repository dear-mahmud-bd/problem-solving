// https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    int fre[26]={0};
    for(int i=0; i<st.size(); i++){
        fre[st[i]-'a'] = 1;
    }
    for (int i=0; i<26; i++){
        if(fre[i] == 0){
            char ch = i+'a';
            cout<<ch;
            return 0;
        }
    }
    cout<<"None\n";
    return 0;
}