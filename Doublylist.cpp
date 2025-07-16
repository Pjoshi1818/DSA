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



                        void pop_front(){
                            if(head == NULL){
                                cout<<"empty";
                                return;
                            }
                            node* temp = head;
                            head = head->next;
                            if(head != NULL)
                            head ->prev = NULL;
                        
                        temp->next = NULL;
                        delete temp;

                        }



                        void pop_back(){
                            if(head == NULL){
                                cout<<"empty";
                                return;
                            }
                            node* temp = tail;
                            tail = tail->prev;
                                if(tail != NULL){
                            tail->next = NULL;}
                            temp->prev = NULL;
                            delete temp;




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
            cout<<endl;
    }
     
};
int main()
{

    d_LIST dll;
    
    cout<<"befour pop\n";
    dll.push_front(500);
    dll.push_back(52);
    dll.push_front(500);
    dll.push_back(852);

    dll.print();
    cout<<"\nafter pop\n";
dll.pop_front();
      dll.print();
    return 0;
}