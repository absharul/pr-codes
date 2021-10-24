#include<iostream>
using namespace std;

class node
{

 public:    
    int data;
    node* next;
};

void nodefront(node** head, int data)
{
    
    node* new_node = new node();

    new_node->data=data;

    new_node->next=*head;

    *head=new_node;
}


void displayafter(node* prev_node, int data)
{      
         if(prev_node==NULL)
         {
         cout<<"\nNode cannot be null";
         return;
           }
     node* new_node = new node();

     new_node->data=data;

     new_node->next=prev_node->next;

     prev_node->next=new_node;

}

void display(node* n)
{
    while(n!=NULL)
    {
    cout<<n->data<<" ";
    n=n->next;
    }
}


int main(){
     
    node* head = NULL;
    node* first = NULL;
    node* second = NULL;
    
    head = new node();
    first  = new node();
    second = new node();


    head->data=10;
    head->next=first;

    first->data=20;
    first->next=second;

    second->data=30;
    second->next=NULL;

  

    nodefront(&head,5);
    displayafter(head->next,50);
    display(head);
    return 0;
    
    }