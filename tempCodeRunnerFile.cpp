// #include <iostream>
// using namespace std;

// class stack {
//     int n = 2;
//     int arr[2];
//     int top = -1;
// public:
//     void push(int x) {
//         if (top >= n - 1) {
//             cout << "Stack Overflow" << endl;
//             return;
//         }
//         arr[++top] = x;
//     }
//     void pop() {
//         if (top == -1) {
//             cout << "Stack Underflow" << endl;
//             return;
//         }
//         top--;
//     }
//     int peek() {
//         if (top == -1) {
//             cout << "Stack under flow" << endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     void display() {
//         if (top == -1) {
//             cout << "Stack is kahli" << endl;
//             return;
//         }
//  for (int i = 0; i <= top; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     stack st;
//     st.push(10);
//     st.push(101);
//     st.push(101);
    

//     // st.pop();
//     st.display();
//     cout << st.peek() << endl;
   
//     return 0;
// }


#include <iostream>
using namespace std;

class stack {
    int n = 2;
    int arr[2];
    int top = -1;
public:
    void push(int x) {
        if (top >= n - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int peek() {
        if (top == -1) {
            cout << "Stack under flow" << endl;
            return -1;
        }
        return arr[top];
    }
    void display() {
        if (top == -1) {
            cout << "Stack is kahli" << endl;
            return;
        }
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    stack st;
    int n;
    int val; // To take value from user for push
    cout << "value of n "; // Optional line (can be removed)

    do {
        cout << "\nsleact" << endl;
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit" << endl;
        cout << "Enter your n: ";
        cin >> n;

        switch (n) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                st.push(val); // Now using user input
                break;

            case 2:
                st.pop();
                break;

            case 3: {
                int x = st.peek(); // wrap in block to avoid error
                if (x != -1)
                    cout << "Top element: " << x << endl;
                break;
            }

            case 4:
                st.display();
                break;

            case 5:
                cout << "nikal BOSDK" << endl;
                break;

            default:
                cout << "invalid " << endl;
        }

    } while (n != 5);

    return 0;
}

