#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //O(logN) Time complexity:
    while(n>0){
        int dig=n%10;
        cout<<dig<<endl;
        n/=10;
    }
    return 0;
}