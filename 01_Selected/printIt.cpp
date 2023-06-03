#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, flag=0;
    cin>>num;

    for (int row=1; row<=num; row++){
        for (int col=1; col<=num-row; col++){
            cout<<" ";
        }
        if(flag==0){
            for (int col = 1; col <= 2*row-1; col++){
                cout<<">";
            }
            cout<<"\n";
            flag=1;
        }else{
            for (int col = 1; col <= 2*row-1; col++){
                cout<<"<";
            }
            cout<<"\n";
            flag=0;
        }
    }

    for (int row=num-1; row>=1; row--){
        for (int col=1; col<=num-row; col++){
            cout<<" ";
        }
        if(flag==0){
            for (int col = 1; col <= 2*row-1; col++){
                cout<<">";
            }
            cout<<"\n";
            flag=1;
        }else{
            for (int col = 1; col <= 2*row-1; col++){
                cout<<"<";
            }
            cout<<"\n";
            flag=0;
        }
    }
    
    return 0;
}