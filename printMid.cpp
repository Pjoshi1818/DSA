// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class LinkedList
// {
// private:
//     node *head;

// public:
//     LinkedList()
//     {
//         head = NULL;
//     }
//     void insert(int val)
//     {
//         node *newnode = new node(val);
//         if (head == NULL)
//         {
//             head = newnode;
//             return;
//         }

//         node *temp = head;
//         while (temp->next != NULL)
//             temp = temp->next;

//         temp->next = newnode;
//     }

//     void display()
//     {
//         node *temp = head;
//         while (temp != NULL)
//         {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }


//     // method no one basic :::: size 

//     // void printMiddle()
//     // {

//     //     node *temp = head;
//     //     int sz = 0;
//     //     while (temp != NULL)
//     //     {

//     //         temp = temp->next;

//     //         sz++;
//     //     }
//     //     int mid = sz / 2;
//     //     temp = head;

//     //     for (int i = 0; i < mid; i++)
//     //     {
//     //         temp = temp->next;
//     //     }

//     //     if (temp != NULL)
//     //         cout << "Middle element is: " << temp->data << endl;
//     //     else
//     //         cout << "List is empty." << endl;
//     // }



  

//     node* middleNode(node* head) {
//           node* slow = head;
//            node* fast = head;
//            while(fast != NULL && fast->next != NULL) {
//                 slow = slow->next;
//                 fast = fast->next->next;
//            }
//             return slow;
        
//     }
 
// };

// // Main function
// int main()
// {
//     LinkedList list;
//     int n, val;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter elements:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> val;
//         list.insert(val);
//     }

//     cout << "\nLinked List: ";
//     list.display();

//     list.middleNode();

//     return 0;
// }
