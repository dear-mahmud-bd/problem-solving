// https://codeforces.com/problemset/problem/633/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int flag=0;
    while (c >= 0) {
        if (c%a==0 || c%b==0) {
            flag = 1;
            break;
        }
        c -= b;
    }
    if(flag==1){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
    return 0;
}