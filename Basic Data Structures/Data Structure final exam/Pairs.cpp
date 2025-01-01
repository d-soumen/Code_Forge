#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int val;
    Person(string name,int val){
        this->name=name;
        this->val=val;
    }
};

bool cmp(Person a, Person b){
    if(a.name == b.name){
        return a.val > b.val;
    }
    else{
        return a.name < b.name;
    }
}

int main(){
    int n;
    cin>>n;
    vector<Person>p;
    for(int i=0;i<n;i++){
        string name;
        int val;
        cin>>name>>val;
        Person obj(name,val);
        p.push_back(obj);
    }
    sort(p.begin(),p.end(),cmp);
    for(auto it=p.begin();it!=p.end();it++){
        cout<<it->name<<" "<<it->val<<endl;
    }
    return 0;
}