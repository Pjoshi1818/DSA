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
    int topfun() {
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
    st.push(10);
    st.push(101);
    st.push(101);
    

    // st.pop();
    st.display();
    cout << st.topfun() << endl;
   
    return 0;
}
