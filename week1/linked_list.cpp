#include<bits/stdc++.h>
using namespace std ;
class node
{
    public:
    int data;
    node *next;
    node(int d){
        data = d;
        next = NULL;
    }

};
node *head = NULL;
node *tail = NULL;
void push(int data) {
    if(head == NULL)
    {
        node *n = new node(data);
        head = n;
        tail = n;
    }
    else
    {
        node * n = new node(data);
        n->next = head;
        head = n;
    }
}
void push_back(int data) {
    if( head == NULL){
        node * n = new node(data);
        head =tail= n;
    }
    else
    {
        node * n = new node(data);
        tail->next = n;
        tail = n;
    }
}
int main()
{
    push(8);
    push(9);
    push_back(19);
<<<<<<< HEAD
    push_back(20);
    
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
=======
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }

}
>>>>>>> d1c8387a0eb756677216545236b8c50fe22f9da0
