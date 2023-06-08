// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
#include<bits/stdc++.h>
using namespace std;
vector<int> mergeSort(vector<int>ar){
    if(ar.size()<=1)
        return ar;
    int mid = ar.size()/2;
    vector<int>l,r;
    for(int i=0; i<mid; i++)
            l.push_back(ar[i]);
    for(int i=mid; i<ar.size(); i++)
            r.push_back(ar[i]);
    vector<int>sorted_l = mergeSort(l);
    vector<int>sorted_r = mergeSort(r);
    vector<int>sorted_ar;
    int idx1=0, idx2=0;
    for(int i=0; i<ar.size(); i++){
        if(idx1==sorted_l.size()){
            sorted_ar.push_back(sorted_r[idx2]);
            idx2++;
        }else if(idx2==sorted_r.size()){
            sorted_ar.push_back(sorted_l[idx1]);
            idx1++;
        }else if(sorted_l[idx1] < sorted_r[idx2]){
            sorted_ar.push_back(sorted_l[idx1]);
            idx1++;
        }else{
            sorted_ar.push_back(sorted_r[idx2]);
            idx2++;
        }
    }
    return sorted_ar;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,ele,k;
    cin>>num>>k;
    vector<int>ar;
    for(int i=0; i<num; i++){
        cin>>ele;
        ar.push_back(ele);
    }
    vector<int>sorted_arr = mergeSort(ar);
    long long int max_sum = 0;
    for(int j=num-1;j>=(num-k);j--){
        if(sorted_arr[j] >= 0){
            max_sum += sorted_arr[j];
        }
    }
    cout<<max_sum<<"\n";
    return 0;
}