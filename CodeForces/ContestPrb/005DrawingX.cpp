// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    char f=92;
    char b=47;
    int num;
    cin>>num;
    for (int row=1; row<=num; row++){
        for (int col=1; col<=num; col++){
            if((row==col) && (num/2)+1==row && (num/2)+1==col){
                cout<<"X";
            } else if(row==col){
                cout<<f;
            } else if(row+col==num+1){
                cout<<b;
            } else {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}