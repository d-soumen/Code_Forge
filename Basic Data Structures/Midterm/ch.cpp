#include <iostream>
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

void print_left_to_right(Node* head) {
    Node* tmp = head;
    cout << "L -> ";
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_right_to_left(Node* tail) {
    Node* tmp = tail;
    cout << "R -> ";
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert(Node*& head, Node*& tail, int pos, int val) {
    Node* newNode = new Node(val);

    // If the position is invalid
    if (pos < 0 || (head == NULL && pos > 0)) {
        cout << "Invalid" << endl;
        delete newNode;
        return;
    }

    // Inserting at the head (position 0)
    if (pos == 0) {
        if (head == NULL) { // If list is empty
            head = newNode;
            tail = newNode;
        } else { // If list is not empty
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        print_left_to_right(head);
        print_right_to_left(tail);
        return;
    }

    // Traverse to the position where we need to insert
    Node* temp = head;
    int currentIndex = 0;
    while (temp != nullptr && currentIndex < pos - 1) {
        temp = temp->next;
        currentIndex++;
    }

    // If the position is invalid
    if (temp == nullptr) {
        cout << "Invalid" << endl;
        delete newNode;
        return;
    }

    // If inserting at the end of the list
    if (temp->next == nullptr) {
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
    } else { // Inserting in the middle of the list
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }

    print_left_to_right(head);
    print_right_to_left(tail);
}

int main() {
    int Q;
    cin >> Q;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;
        insert(head, tail, X, V);
    }

    return 0;
}
