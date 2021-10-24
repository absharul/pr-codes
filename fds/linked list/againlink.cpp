#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

};

void display(node* n){
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;

    }
}

int main()
{
    node* head = NULL;
    node* first = NULL;
    node* second = NULL;

    head = new node();
    first = new node();
    second = new node();

    head->data = 10 ;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = NULL;

    display(head);


    return 0;
}