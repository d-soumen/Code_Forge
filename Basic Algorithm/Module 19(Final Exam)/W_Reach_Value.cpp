#include<bits/stdc++.h>
using namespace std;
long long input;
bool reach(long long n){
    if(n>input)
        return false;
    if(n==input)
        return true;
    return reach(n*10)||reach(n*20);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>input;
        if(reach(1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}