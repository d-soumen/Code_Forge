#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    v.insert(v.begin()+2,10);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}