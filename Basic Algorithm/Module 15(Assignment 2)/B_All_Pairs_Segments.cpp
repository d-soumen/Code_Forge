#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>queri(b);
        for(int i=0;i<b;i++){
            cin>>queri[i];
        }
        vector<ll>count(n,0);
        for(int i=1;i<n;i++){
            ll length=v[i]-v[i-1];
            count[1]+=length-1;
            count[i]+=1;
        }
        for(int i=1;i<n;i++){
            count[i]+=count[i-1];
        }
        vector<ll>res(b);
        for(int i=0;i<b;i++){
            ll k=queri[i];
            if(k>=n){
                res[i]=0;
            }
            else{
                res[i]=count[n-1]-count[k-1];
            }
        }
        for(int i=0;i<b;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}