#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        prev = next = NULL;
    }
};
class d_LIST
{
    node *head;
    node *tail;

public:
    d_LIST()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void push_back(int val)
    {
        node *newnode = new node(val);

        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->prev= tail;
            tail->next = newnode;
            tail = newnode;
        }
    }

    void print()
    {
        node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <--> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
int main()
{

    d_LIST dll;
       dll.push_front(500);
    dll.push_back(52);
    dll.push_front(500);
    dll.push_back(852);
    dll.print();
    return 0;
}