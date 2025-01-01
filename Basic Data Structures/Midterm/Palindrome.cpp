#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert(Node*&head,Node*&tail,int val){
    Node*newNode=new Node(val);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
bool is_pallindrome(Node*head,Node*tail){
    Node*tmp1=head;
    Node*tmp2=tail;
    while(tmp1 !=tmp2){
        if(tmp1->val!=tmp2->val){
            return false;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->prev;
    }
    return true;
}
int main(){
    Node*head=NULL;
    Node*tail=NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert(head,tail,v);
    }
    if(is_pallindrome(head,tail)==true){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
    return 0;
}