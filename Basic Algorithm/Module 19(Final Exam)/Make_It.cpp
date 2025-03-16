#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+5;
ll input;
int dp[N];
bool reach(ll n){
    if(n>input){
        return false;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    if(n==input)
        return true;
    return dp[n]=reach(n*2)||reach(n+3);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>input;
        memset(dp,-1,sizeof(dp));
        if(reach(1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}