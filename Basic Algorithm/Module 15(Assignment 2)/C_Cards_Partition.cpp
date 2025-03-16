#include<bits/stdc++.h>
#define ll long long
#define all(a) a.begin(),a.end()
using namespace std;
void sol(){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll max_ele=LLONG_MIN;
    for(auto x:a){
        max_ele=max(max_ele,x);
    }
    ll total_sum=accumulate(all(a),0LL);
    for(int i=n;i>0;i--){
        ll q=(total_sum+k)/i;
    }
    
}
int main(){
    
    return 0;
}