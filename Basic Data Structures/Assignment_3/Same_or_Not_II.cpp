#include<bits/stdc++.h>
using namespace std;
class myStack{
public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};
class myQueue{
    public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    int front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }

};
bool isSame(myStack st , myQueue q){
    if(st.size()!=q.size()){
        return false;
    }
    while(!st.empty()){
        if(st.top() == q.front()){
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
    myStack st;
    myQueue q;
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
    if(isSame(st,q)==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}