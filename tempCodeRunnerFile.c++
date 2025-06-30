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


int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}
