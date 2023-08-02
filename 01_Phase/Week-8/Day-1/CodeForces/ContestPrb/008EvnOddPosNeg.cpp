// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, evn=0, odd=0, pos=0, neg=0;
    cin>>n;
    for (int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t>0)pos++;
        if(t<0)neg++;
        if(t%2 == 0)evn++;
        else odd++;
    }
    cout<<"Even: "<<evn<<"\n";
    cout<<"Odd: "<<odd<<"\n";
    cout<<"Positive: "<<pos<<"\n";
    cout<<"Negative: "<<neg<<"\n";
    return 0;
}