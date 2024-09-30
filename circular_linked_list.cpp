#include <iostream>
using namespace std;

// Node structure for circular linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the circular linked list
void insertEnd(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;

    if (head == nullptr) {
        head = newNode;
        newNode->next = head;  // Pointing to itself to make it circular
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}

// Function to display the circular linked list
void displayList(Node* head) {
    if (head == nullptr) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    cout << "Circular Linked List: ";
    displayList(head);

    return 0;
}
