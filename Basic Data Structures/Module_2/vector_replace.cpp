#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,4,5,63,2,3,5,6,2,6,4};
    // replace(v.begin(),v.end(),2,10);
    // for(int x : v){
    //     cout<<x<<" ";
    // }
    auto it=find(v.begin(),v.end(),3);
    if(it==v.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }

    return 0;
}