#include<bits/stdc++.h>
using namespace std;
bool elimination(string s){
    stack<char>st;
    for(char c:s){
        if(c=='1' && !st.empty() && st.top() == '0'){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    return st.empty();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(elimination(s)==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}