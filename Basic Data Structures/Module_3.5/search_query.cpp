#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int l=0,r=n-1;
        int flag=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(x==a[mid]){
                flag=1;
                break;
            }
            if(x>a[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}