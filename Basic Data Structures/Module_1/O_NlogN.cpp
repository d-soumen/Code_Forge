#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<=n;i++){
        int x=i;
        while(x>10){
            int dig=x/10;
            cout<<dig<<endl;
            x/=10;
        }
        cout<<endl;
    }
    return 0;
}