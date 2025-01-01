#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>a(n);
    vector<long long>pre(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=a[i]+pre[i-1];
    }
    sort(pre.begin(),pre.end(),greater<long long>());
    for(long long val:pre){
        cout<<val<<" ";
    }
    return 0;
}