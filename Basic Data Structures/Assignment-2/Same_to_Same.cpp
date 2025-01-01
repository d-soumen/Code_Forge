#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert(Node*&head,Node*&tail,int val){
    Node* newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void compare(Node*head1,Node*head2){
    Node*tmp_1=head1;
    Node*tmp_2=head2;
    vector<int>v;
    while(tmp_1!=NULL){
        v.push_back(tmp_1->val);
        tmp_1=tmp_1->next;
    }
    vector<int>r;
    while(tmp_2!=NULL){
        r.push_back(tmp_2->val);
        tmp_2=tmp_2->next;
    }
    if(v==r){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
}

int main(){
    Node*head1=NULL;
    Node*tail1=NULL;
    Node*head2=NULL;
    Node*tail2=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert(head1,tail1,val);
    }
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert(head2,tail2,val);
    }
    compare(head1,head2);
    
    return 0;
}