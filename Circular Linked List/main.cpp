#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* head = NULL;

void addFirst(int value) {
    Node *newnode = new Node(value);


    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    }
    else {
        Node* temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        newnode->next = head;
        temp->next = newnode;
        head = newnode;
    }
}
void deleteFirst() {
    if (head == NULL) {
        cout << "not found ";
        return;
    }

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* last = head;

    while (last->next != head) {
        last = last->next;
    }

    Node* toDelete = head;
    head = head->next;
    last->next = head;

    delete toDelete;
}


void display() {
    if (head == NULL) return;

    Node *temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {

    addFirst(10);
    addFirst(20);
    addFirst(30);
    addFirst(40);
    addFirst(50);

    display();
    deleteFirst();
    display();
    deleteFirst();
    display();
    deleteFirst();
    display();
    deleteFirst();
    display();
    deleteFirst();
    display();


    return 0;
}
