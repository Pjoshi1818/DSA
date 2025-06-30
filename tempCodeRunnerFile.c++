// #include <iostream>
// using namespace std;

// class Queue {
//     int arr[100];   
//     int front, rear;

// public:
//     Queue() {
//         front = rear = -1;
//     }

//     void enqueue(int x) {
//         if (rear == 99) {
//             cout << "Queue is full\n";
//             return;
//         }
//         if (front == -1) front = 0;
//         rear++;
//         arr[rear] = x;
//         cout << x << " inserted\n";
//     }

//     void dequeue() {
//         if (front == -1 || front > rear) {
//             cout << "Queue is empty\n";
//             return;
//         }
//         cout << arr[front] << " removed\n";
//         front++;
//     }


//     void display() {
//         if (front == -1 || front > rear) {
//             cout << "Queue is empty\n";
//             return;
//         }
//         cout << "Queue: ";
//         for (int i = front; i <= rear; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };


// int main() {
//     Queue q;

//     q.enqueue(5);
//     q.enqueue(10);
//     q.enqueue(15);

//     q.display();

//     q.dequeue();
//     q.display();

//     return 0;
// }
#include <iostream>
using namespace std;

class Queue {
    int arr[100];   
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if (rear == 99) {
            cout << "Queue is full\n";
            return;
        }
        if (front == -1) front = 0;
        rear++;
        arr[rear] = x;
        cout << x << " inserted\n";
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << arr[front] << " removed\n";
        front++;
    }


    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


// int main() {
//     Queue q;
//     int n , value;

    // q.enqueue(5);
    // q.enqueue(10);
    // q.enqueue(15);

    // q.display();

    // q.dequeue();
    // q.display();

    // return 0;



   int main() {
    Queue q;
    int n, value;

    do {
        cout << "\nSelect an option:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> n;

        switch (n) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (n != 4);

    return 0;
}
