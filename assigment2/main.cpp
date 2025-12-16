#include <iostream>
 using namespace std;

 struct Node {
     int data;
     Node* next;
 };

 class Queue {
 private:
     Node* front;
     Node* rear;
 public:
     Queue() {
         front = rear = nullptr;
     }
//
     void enqueue(int value) {
         Node* newNode = new Node;
         newNode->data = value;
         newNode->next = nullptr;
         if (front == nullptr) {
             front = rear = newNode;
         } else {
             rear->next = newNode;
             rear = newNode;
         }
     }

     void dequeue() {
         if (front == nullptr) {
             cout << "Queue is Empty" << endl;
             return;
         }
         Node* temp = front;
         front = front->next;
         if (front == nullptr) {
             rear = nullptr;
         }
         delete temp;
     }

     void display() const {
         Node* temp = front;
         while (temp != nullptr) {
             cout << temp->data << " ";
             temp = temp->next;
         }
         cout << endl;
     }
 };

 int main()
 {
     Queue q;
     q.enqueue(10);
     q.dequeue();
     q.enqueue(20);
     q.enqueue(30);
     q.display();
     return 0;
 }