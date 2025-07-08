#include <iostream>
using namespace std;

// Definition for singly-linked list node.
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;  // store next node
            curr->next = prev;  // reverse current node's pointer
            prev = curr;        // move prev one step forward
            curr = next;        // move curr one step forward
        }
        return prev; 
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
  
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    ListNode* reversedHead = sol.reverseList(head);

    cout << "Reversed List: ";
    printList(reversedHead);

    return 0;
}
