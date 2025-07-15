#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;        // ✅ use member variable 'data'
        next = NULL;
    }
};

class list {
    node* head;
    node* tail;

public:
    list() {
        head = tail = NULL;
    }

    void insert_head(int val) {
        node* newnode = new node(val);

        if (head == NULL) {          
            head = tail = newnode;
            tail->next = head;       
        } else {

               // without using head;
                // newnode->next = tail->next;
                // tail->next = newnode;
                //


            newnode->next = head;
            head = newnode;
            tail->next = head;       // maintain circular link
        }
    }

    void print() {
        if (head == NULL) return;   

        node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    list ll;
    ll.insert_head(95);
    ll.insert_head(9);
    ll.insert_head(98);
    ll.print();

    return 0;
}
