#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    vector<int>v[n];
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(v[x].empty()){
            cout<<-1<<endl;
        }
        else{
            sort(v[x].begin(),v[x].end(),greater<int>());
            for(int val:v[x]){
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}