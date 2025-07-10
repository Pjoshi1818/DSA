// #include <iostream>
// #include <stack>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node *next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class list {
//     Node *head;
//     Node *tail;

// public:
//     list() {
//         head = tail = NULL;
//     }

//     void push_front(int val) {
//         Node *newnode = new Node(val);
//         if (head == NULL) {
//             head = tail = newnode;
//         } else {
//             newnode->next = head;
//             head = newnode;
//         }
//     }

//     void push_end(int val) {
//         Node *newnode = new Node(val);
//         if (head == NULL) {
//             head = tail = newnode;
//         } else {
//             tail->next = newnode;
//             tail = newnode;
//         }
//     }

//     void pop_front() {
//         if (head == NULL) {
//             cout << "empty:" << endl;
//             return;
//         }
//         Node *temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }

//     void pop_end() {
//         if (head == NULL) {
//             cout << "empty:" << endl;
//             return;
//         }
//         if (head == tail) {
//             delete head;
//             head = tail = NULL;
//             return;
//         }
//         Node *temp = head;
//         while (temp->next != tail) {
//             temp = temp->next;
//         }
//         delete tail;
//         tail = temp;
//         tail->next = NULL;
//     }

//     void mid(int val, int pos) {
//         if (pos < 0) {
//             cout << "invalid pos..." << endl;
//             return;
//         }
//         if (pos == 0) {
//             push_front(val);
//             return;
//         }

//         Node *temp = head;
//         for (int i = 0; i < pos - 1; i++) {
//             if (temp == nullptr) {
//                 cout << "invalid position" << endl;
//                 return;
//             }
//             temp = temp->next;
//         }

//         Node *newnode = new Node(val);
//         newnode->next = temp->next;
//         temp->next = newnode;

//         if (newnode->next == NULL) {
//             tail = newnode;
//         }
//     }

//     // 1. Iterative method
//     void reverseIterative() {
//         Node *prev = NULL;
//         Node *curr = head;
//         Node *next = NULL;
//         tail = head;

//         while (curr != NULL) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         head = prev;
//     }

//     // 2. Recursive method (helper)
//     Node* reverseRecursiveUtil(Node* node) {
//         if (node == NULL || node->next == NULL)
//             return node;

//         Node* newHead = reverseRecursiveUtil(node->next);
//         node->next->next = node;
//         node->next = NULL;
//         return newHead;
//     }

//     void reverseRecursive() {
//         tail = head;
//         head = reverseRecursiveUtil(head);
//     }

//     // 3. Stack-based method
//     void reverseUsingStack() {
//         if (!head) return;
//         stack<Node*> st;
//         Node* temp = head;
//         while (temp) {
//             st.push(temp);
//             temp = temp->next;
//         }

//         head = st.top();
//         st.pop();
//         temp = head;

//         while (!st.empty()) {
//             temp->next = st.top();
//             st.pop();
//             temp = temp->next;
//         }
//         temp->next = NULL;
//         tail = temp;
//     }

//     void printll() {
//         Node *temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     list ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(6);
//     ll.push_end(456);
//     ll.mid(45, 2);

//     cout << "Original List: ";
//     ll.printll();

//     // Choose one reversal method:
//     ll.reverseIterative();    // Method 1
//     // ll.reverseRecursive(); // Method 2
//     // ll.reverseUsingStack(); // Method 3

//     cout << "Reversed List: ";
//     ll.printll();

//     return 0;
// }


