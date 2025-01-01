#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string data;
    Node* next;
    Node*prev;
    Node(string data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert(Node*&head,Node*&tail,string s){
    Node* newNode=new Node(s);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void visit(Node*&current,Node*head,string add){
    Node*tmp=head;
    int flag=0;
    while(tmp!=NULL){
        if(tmp->data==add){
            current=tmp;
            cout<<current->data<<endl;
            flag=1;
            break;
        }
        tmp=tmp->next;
    }
    if(flag==0){
        cout<<"Not Available"<<endl;
    }
}
void next(Node*&current){
    if(current->next!=NULL){
        current=current->next;
        cout<<current->data<<endl;
    }
    else{
        cout<<"Not Available"<<endl;
    }
}
void prev(Node*&current){
    if( current->prev!=NULL){
        current=current->prev;
        cout<<current->data<<endl;
    }
    else{
        cout<<"Not Available"<<endl;
    }
}
int main(){
    Node*head=NULL;
    Node*tail=NULL;
    Node*current=NULL;
    string s;
    while(true){
        cin>>s;
        if(s=="end") break;
        insert(head,tail,s);
    }
    current=head;
    int q;
    cin>>q;
    string com,add;
    while(q--){
        cin>>com;
        if(com=="visit"){
            cin>>add;
            visit(current,head,add);
        }
        else if(com=="next"){
            next(current);
        }
        else if(com=="prev"){
            prev(current);
        }
    }
    return 0;
}