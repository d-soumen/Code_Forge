#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
bool perfect_mark(int n,int m,int a[]){
    if(m==1000)
        return true;
    if(n==0||m>1000)
        return false;
    if(dp[n][m]!=-1)
        return dp[n][m];
    if(m+a[n-1]<=1000){
        bool op1=perfect_mark(n-1,m+a[n-1],a);
        bool op2=perfect_mark(n-1,m,a);
        return dp[n][m]=(op1)||(op2);
    }
    else{
        return dp[n][m]=perfect_mark(n-1,m,a);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        memset(dp,-1,sizeof(dp));
        if(perfect_mark(n,m,a)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}