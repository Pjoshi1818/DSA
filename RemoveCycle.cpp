#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};


class list {
private:
    node* head;

public:
    list() {
        head = NULL;
    }

    void insert(int val) {
        node* newNode = new node(val);
        if (head == NULL) {
            head = newNode;
        } else {
            node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void createCycle(int pos) {
        if (head == NULL || pos <= 0) return;
        node* temp = head;
        node* cycleNode = NULL;
        int count = 1;

        while (temp->next != NULL) {
            if (count == pos) {
                cycleNode = temp;
            }
            temp = temp->next;
            count++;
        }

        if (cycleNode != NULL) {
            temp->next = cycleNode;
        }
    }

    node* getHead() {
        return head;
    }
};


class Solution {
public:
    bool hasCycle(node* head) {
        node* slow = head;
        node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true; 
            }
        }
        return false; 
    }
};


int main() {
    list myList;
    myList.insert(10);
    myList.insert(20);
    myList.insert(30);
    myList.insert(40);
    myList.insert(50);

    
    myList.createCycle(2);

    Solution solver;
    if (solver.hasCycle(myList.getHead())) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle in the linked list." << endl;
    }

    return 0;
}
