#include<bits/stdc++.h>
using namespace std;
bool check_sort(int a[],int n){
    
    for(int i=0;i<n-1;i++){
        if(a[i] > a[i+1]){
           return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(check_sort(a,n)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}