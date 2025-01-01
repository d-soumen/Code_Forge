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
void insert_tail(Node*&head,Node*&tail,int v){
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void del_duplicate(Node*head){
    if(head==NULL){
        return;
    }
    Node*tmp=head;
    while(tmp!=NULL){
        Node*Newtmp=tmp;
        while(Newtmp->next!=NULL){
            if(tmp->val==Newtmp->next->val){
                Node*del_node=Newtmp->next;
                Newtmp->next=Newtmp->next->next;
                delete del_node;
            }
            else{
                Newtmp=Newtmp->next;
            }
        }
        tmp=tmp->next;
    }
}
void print(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main(){
    Node *head=NULL;
    Node*tail=NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert_tail(head,tail,v);
    }
    del_duplicate(head);
    print(head);
    return 0;
}