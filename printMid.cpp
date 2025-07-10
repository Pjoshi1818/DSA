#include <iostream>
using namespace std;

// Define the Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Define the Linked List class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Function to insert at the end
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    // Function to print the list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Function to find and print the middle node
    void printMiddle() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        // Move slow by 1 and fast by 2
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle element is: " << slow->data << endl;
    }
};

// Main function
int main() {
    LinkedList list;
    int n, val;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> val;
        list.insert(val);
    }

    cout << "\nLinked List: ";
    list.display();

    list.printMiddle();

    return 0;
}
