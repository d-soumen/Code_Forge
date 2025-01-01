#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL) {
        tail = head;
    }
}

void del_node(Node*& head, Node*& tail, int pos) {
    if (head == NULL) return;
    if (pos == 0) {
        Node* del_head = head;
        head = head->next;
        delete del_head;
        return;
    }
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
        if(tmp==NULL){
            return;
        }
    }
    if(tmp->next == NULL){
        return;
    }
    Node*del_node=tmp->next;
    tmp->next=tmp->next->next;
    delete del_node;
    if(tmp->next==NULL){
        tail = tmp;
    }
}

int size(Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_head(head, tail, v);
        } else if (x == 1) {
            insert_tail(head, tail, v);
        } else if (x == 2) {
            if (v < size(head)) {
                del_node(head, tail, v);
            }
        }
        print(head);
    }
    return 0;
}
