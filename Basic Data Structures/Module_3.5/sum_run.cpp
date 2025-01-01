#include<bits/stdc++.h>
using namespace std;
vector<int> run_sum(vector<int>num ,vector<int>sum ,int n){
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sum[0]=num[0];
    for(int i=1;i<n;i++){
        sum[i]=num[i]+sum[i-1];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>num(n);
    vector<int>sum(n);
    vector<int>res = run_sum(num,sum,n);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}