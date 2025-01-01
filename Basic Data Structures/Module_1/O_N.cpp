#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //TC- O(N)
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    //TC-O(N)
    cout<<sum<<endl;
    return 0;
}