#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node* prev;

    Node(string data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void visit(Node*& current, Node* head, string address) {
    Node* temp = head;
    bool found = false;
    while (temp != nullptr) {
        if (temp->data == address) {
            current = temp;
            cout << current->data << endl;
            found = true;
            break;
        }
        temp = temp->next;
    }
    if (!found) {
        cout << "Not Available" << endl;
    }
}

void next(Node*& current) {
    if (current != nullptr && current->next != nullptr) {
        current = current->next;
        cout << current->data << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

void prev(Node*& current) {
    if (current != nullptr && current->prev != nullptr) {
        current = current->prev;
        cout << current->data << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    Node* current = nullptr;
    string s;

    // Reading the addresses
    while (true) {
        cin >> s;
        if (s == "end") break;
        Node* newNode = new Node(s);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Initially set current to head
    current = head;

    int q;
    cin >> q;
    string com, address;

    while (q--) {
        cin >> com;
        if (com == "visit") {
            cin >> address;
            visit(current, head, address);
        } else if (com == "next") {
            next(current);
        } else if (com == "prev") {
            prev(current);
        }
    }

    return 0;
}
