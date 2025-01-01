#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string>qu;
    int q;
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        if(t==0){
            string s;
            cin>>s;
            qu.push(s);
        }
        else if(t==1){
            if(qu.empty()){
                cout<<"Invalid"<<endl;
            }
            else{
                cout<<qu.front()<<endl;
                qu.pop();
            }
            
        }

    }
    return 0;
}