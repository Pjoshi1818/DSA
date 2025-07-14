#include<iostream>
using namespace std;

    class node {
            public:
            int data;
            node* next;
            node* prev;
            node(int val){
                data = val;
            prev=next =NULL;

            }
    };
    class   d_LIST{
            node* head;
            node* tail;
            public:
            d_LIST(){
                head = tail =NULL;}        
                
                   void fush_front( int val){
                    node* newnode = new node(val);
                    if (head == NULL){
                        head = newnode;
                    }
                    else {
                        newnode->next= head;
                        head->prev =newnode;
                        head = newnode;
                    }
                   }

            

                   void print(){
                    node*temp;
                    temp= head;
                    while(temp != NULL){
                             cout<<temp->data;
                        temp=temp->next;
                   
                    }
                   }

            };
int main (){

    d_LIST dll;
    dll.fush_front(52);
    dll.print();
    return 0;
}