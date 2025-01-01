#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(20);
    cout<<v.capacity()<<endl;
    v.push_back(30);
    cout<<v.capacity()<<endl;
    
    return 0;
}