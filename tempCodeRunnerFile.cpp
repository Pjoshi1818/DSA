// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     node(int val) {
//         data = val;
//         next = NULL;
//     }
// };


// class list {
// private:
//     node* head;

// public:
//     list() {
//         head = NULL;
//     }

//     void insert(int val) {
//         node* newNode = new node(val);
//         if (head == NULL) {
//             head = newNode;
//         } else {
//             node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }
//     }

//     void createCycle(int pos) {
//         if (head == NULL || pos <= 0) return;
//         node* temp = head;
//         node* cycleNode = NULL;
//         int count = 1;

//         while (temp->next != NULL) {
//             if (count == pos) {
//                 cycleNode = temp;
//             }
//             temp = temp->next;
//             count++;
//         }

//         if (cycleNode != NULL) {
//             temp->next = cycleNode;
//         }
//     }

//     node* getHead() {
//         return head;
//     }
// };


// class Solution {
// public:
//     bool hasCycle(node* head) {
//         node* slow = head;
//         node* fast = head;

//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) {
//                 cout<<slow->data;
//                 return true; 
//             }
//         }
//         return false; 
//     }
// };


// int main() {
//     list myList;
//     myList.insert(10);
//     myList.insert(20);
//     myList.insert(30);
//     myList.insert(40);
//     myList.insert(50);

    
//     myList.createCycle(2);

//     Solution solver;
//     if (solver.hasCycle(myList.getHead())) {
//         cout << "Cycle detected in the linked list." << endl;
//     } else {
//         cout << "No cycle in the linked list." << endl;
//     }

//     return 0;
// }













// now remove and give starting node of cycle 

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool iscycle = false;

  
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                iscycle = true;
                break;
            }
        }

        if (!iscycle) {
            return NULL;
        }

        slow = head;
        ListNode *prev = NULL;
        while (slow != fast) {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }

        if (prev != NULL) {
            prev->next = NULL;
        }

        return slow;
    }
};


void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {

    ListNode* head = new ListNode(3);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(0);
    ListNode* fourth = new ListNode(-4);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second; 

    Solution sol;
    ListNode* startCycle = sol.detectCycle(head);

    if (startCycle != NULL) {
        cout << "Cycle detected at node with value: " << startCycle->val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    
    cout << "List after removing cycle: ";
    printList(head);

    return 0;
}
