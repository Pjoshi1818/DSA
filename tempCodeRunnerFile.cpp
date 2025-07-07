#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // point to the next node

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class list
{

    Node *head;
    Node *tail;

public:
    list()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newnode = new Node(val); // we use dynamic //Because inside the list class, you create Node objects dynamically using:
                                       // Node newnode(val);  // static  {"It will get deleted as soon as it goes out of the push front, so we will not use it.}

        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }

    // end-->

    void push_end(int val)
    {
        Node *newnode = new Node(val);

        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "empty:";
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    void pop_end()
    {
        if (head == NULL)
        {
            cout << "empty:";
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // mid
    void mid(int val ,int  pos )
    {

        if (pos < 0){
            cout<<"invlide pos...";
            return ;
        }
        if (pos == 0){
            push_front(val);
            return ;
        }
 
Node* temp = head;
for(int i= 0; i < pos-1;i++){
    if(temp == nullptr){
        cout<<"invliede";
        return ;
    }
    temp = temp->next;
}

       Node *newnode = new Node(val);
       newnode->next = temp->next;
       temp->next = newnode;

    }

int search(int key){
        Node * temp =head;
        int idx;
        while(temp != NULL){
            if(temp->data= key){
            cout<<"found"<<" ";
                return idx;

            }
            temp = temp ->next;
            idx++;
        }
        return -1;
}



    void printll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    list ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(6);

    ll.push_end(456);
    // ll.printll();

    // ll.pop_front();
    ll.pop_end();

    // ll.printll();


    ll.mid(45,2);
    
    ll.printll();

    cout<<ll.search(2);
    return 0;
}
   //   simple linked list 