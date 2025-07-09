#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
    Node *head;
    Node *tail;

public:
    list() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node *newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void push_end(int val) {
        Node *newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front() {
        if (head == NULL) {
            cout << "empty:" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_end() {
        if (head == NULL) {
            cout << "empty:" << endl;
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void mid(int val, int pos) {
        if (pos < 0) {
            cout << "invalid pos..." << endl;
            return;
        }
        if (pos == 0) {
            push_front(val);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++) {
            if (temp == nullptr) {
                cout << "invalid position" << endl;
                return;
            }
            temp = temp->next;
        }

        Node *newnode = new Node(val);
        newnode->next = temp->next;
        temp->next = newnode;

        if (newnode->next == NULL) {
            tail = newnode;
        }
    }

    int search(int key) {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Found at index ";
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void reverseList() {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;
        tail = head; // tail will become the old head

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void printll() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    list ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(6);
    ll.push_end(456);
    ll.mid(45, 2);

    cout << "Original List: ";
    ll.printll();

    ll.reverseList();

    cout << "Reversed List: ";
    ll.printll();

    cout << ll.search(2) << endl;

    return 0;
}
