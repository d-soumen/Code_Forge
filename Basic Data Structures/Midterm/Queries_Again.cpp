#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int size(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_left_to_right(Node* head) {
    Node* tmp = head;
    cout << "L -> ";
    while (tmp != NULL) {
        cout << tmp->val<<" ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_right_to_left(Node* tail) {
    Node* tmp = tail;
    cout << "R -> ";
    while (tmp != NULL) {
        cout << tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert(Node*&head,Node*&tail,int x,int v){
    Node*newnode=new Node(v);
    if(x==0){
        insert_head(head,tail,v);
        print_left_to_right(head);
        print_right_to_left(tail);
        return;
    }
    Node*tmp=head;
    for(int i=1; tmp!=NULL && i<x; i++){
        tmp=tmp->next;
    }
    if(x > size(head)){
        cout<<"Invalid"<<endl;
        return;
    }
    if(tmp->next==NULL){
        insert_tail(head,tail,v);
    }
    else{
        newnode->next=tmp->next;
        newnode->prev=tmp;
        tmp->next->prev=newnode;
        tmp->next=newnode;
        
    }
    print_left_to_right(head);
    print_right_to_left(tail);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;
    while (q--) {
        int x, v;
        cin >> x >> v;
        insert(head,tail,x,v);
    }
    return 0;
}
