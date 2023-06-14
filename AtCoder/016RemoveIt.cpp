// https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, X, j=0, ele, count=0;
    cin>>N>>X;
    int ar[N];
    for (int i=0; i<N; i++){
        cin>>ele;
        if(ele!=X){
            ar[j] = ele;
            j++;
            count++;
        }
    }
    for (int j=0; j<count; j++){
        cout<<ar[j]<<" ";
    }
    cout<<"\n";
    return 0;
}