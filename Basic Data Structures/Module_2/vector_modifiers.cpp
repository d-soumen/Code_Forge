#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,20,30};
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // vector<int>v1={1,3,4};
    // v=v1;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    return 0;
}