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
void insert_tail(Node*&head,Node*&tail,int val){
    Node*newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void search_x(Node*head,int x){
    Node*tmp=head;
    int pos=0;
    int flag=0;
    while(tmp!=NULL){
        if(tmp->val ==x){
           flag=1;
           break;
        }
        tmp=tmp->next;
        pos++;
    }
    if(flag==1){
        cout<<pos<<endl;
    }
    else cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node*head=NULL;
        Node*tail=NULL;
        int val;
        while(true){
            cin>>val;
            if(val==-1) break;
            insert_tail(head,tail,val);
        }
        int x;
        cin>>x;
        search_x(head,x);
    }
    
    
    return 0;
}