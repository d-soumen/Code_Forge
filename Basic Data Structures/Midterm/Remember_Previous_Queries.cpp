#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,x;
    list<int>my_list;
    int q;
    cin>>q;
    while(q--){
        cin>>x>>v;
        if(x==0){
            my_list.push_front(v);
        }
        else if(x==1){
            my_list.push_back(v);
        }
        else if(x==2){
            if(v<my_list.size()){
                my_list.erase(next(my_list.begin(),v));
            }
        }
        cout<<"L -> ";
        for(int val:my_list){
            cout<<val<<" ";
        }
        cout<<endl;
        my_list.reverse();
        
        cout<<"R -> ";
        for(int val:my_list){
            cout<<val<<" ";
        }
        cout<<endl;

        my_list.reverse();
    }
    return 0;
}