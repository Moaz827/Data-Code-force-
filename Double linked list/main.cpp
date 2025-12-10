#include  <iostream>
using namespace  std;


class Node {
public:
    int data;
    Node *next;
    Node *prev;


    Node (int value) {
        data = value;
        next=NULL;
        prev=NULL;


    }

};

Node*head=NULL;



void addFirst(int value) {
Node *newnode = new Node(value);


    if (head==NULL) {

head = newnode;
    }
else {
    newnode->next = head;
    head->prev = newnode;
    head = newnode;

}

}
void display() {
    Node *temp = head;


    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main() {

    addFirst(10);
    addFirst(20);
    addFirst(30);
    addFirst(40);
    addFirst(50);
    display();

return 0;
}