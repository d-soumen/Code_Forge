#include<bits/stdc++.h>
using namespace std;
void runnin_sum(int n){
    vector<int>num(n);
    vector<int>sum(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sum[0]=num[0];
    for(int i=1;i<n;i++){
        sum[i]=num[i]+sum[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<sum[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    runnin_sum(n);
    // vector<int>num(n);
    // vector<int>sum(n);
    // for(int i=0;i<n;i++){
    //     cin>>num[i];
    // }
    // sum[0]=num[0];
    // for(int i=1;i<n;i++){
    //     sum[i]=num[i]+sum[i-1];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<sum[i]<<" ";
    // }

    return 0;
}