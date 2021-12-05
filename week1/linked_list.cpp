#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    public:
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
node * head = NULL;
node * tail = NULL;
void push(int data){
        if(head==NULL){
            node *n = new node(data);
            head =tail= n;

        }
        else
        {
            node *n = new node(data);
            n->next = head;
            head = n;
        }
    }

void push_back(int data){
    if(head==NULL){
        node *n = new node(data);
        head = n;
    }
    else{
        node * n = new node(data);
        tail->next = n;
        tail = n;
    }
}
void inser_position(int data,int pos){
    if(pos == 0){
        node *n = new node(data);
        n->next = head;
        head = n;
    }
    else{
        node *temp = head;
        for(int jump = 1;jump<=pos-1;jump++){
            temp = temp->next;
        }
        node *n =new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}
int main()
{
    push(8);
    push_back(19);
    push_back(20);
    
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}