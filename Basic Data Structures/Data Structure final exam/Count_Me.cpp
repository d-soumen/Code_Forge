#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string sen;
        getline(cin,sen);
        string word;
        stringstream ss(sen);
        map<string,int>mp;
        int mx=0;
        string mx_word;

        while(ss >> word){
            mp[word]++;
            if(mp[word] > mx){
                mx=mp[word];
                mx_word=word;
            }
        }
        
        
        cout<<mx_word<<" "<<mx<<endl;
    }
    
    return 0;
}