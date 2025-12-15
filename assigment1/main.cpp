#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Stack {
private:
    Node* top;
public:
    Stack() { top = NULL; }
    void push(int value) {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }
    void pop() {
        if (top == NULL)
        {
            cout << "Stack Underflow!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    void display() const {
        Node* current = top;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    return 0;
}