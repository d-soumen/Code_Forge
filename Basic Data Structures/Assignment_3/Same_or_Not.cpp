#include<bits/stdc++.h>
using namespace std;
bool isSame(stack<int>st,queue<int>q){
    if(st.size()!=q.size()){
        return false;
    }
    while(!st.empty()){
        if(st.top()==q.front()){
            st.pop();
            q.pop();
        }
        else{
            return false;
        }

    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    stack<int>st;
    queue<int>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    if(isSame(st,q)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}