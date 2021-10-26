/*Wrute a c++ program to store set of positive and negative numbers 
using linked list. Write a fuctions: 
1. inser numbers
2. Delete noded with negative numbers
3.To create two more linked list using this list, one containing
all positive numbers and other containing */



#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;

};

class sll{
   public:
   node *head;
   sll(){
       head=NULL;
   }
   node *create();
   void display(node *);
   node *insert_beg(node *);
   void insert_after(node *);
   void insert_end(node *);
   node *remove(node *);
   node *createsorted();
   node *merge(node *, node *);

};

node *sll :: create(){
    node *n,*last;
    int val;
    char ch;
    do{
        cout<<"\nEnter the number: ";
        cin>>val;
        n = new node;
        n->data=val;
        n->next=NULL;

        if(head==NULL){
            head=n;
            last=n;
        }
        else{
            last->next-n;
            last=n;
        }
        cout<<"\nDo you want to insert more nodes? ";
        cin>>ch;
      }while(ch=='y');
      return (head);
    }
 
 node *sll :: insert_beg(node *head)
 {
     node *temp, *n;
     int val;
     temp=head;
     cout<<"\nEnter the number: ";
     cin>>val;
     n =new node;
     n->data=val;
     n->next=NULL;

     if(head==NULL)
     {
         head=n;
     }
     else
     {
         n->next=head;
         head=n;
     }

     return (head);

 }

 void sll::insert_end(node *head)
 {
     node *temp,*n;
     int val;
     temp=head;
     cout<<"\nEnter the number: ";
     cin>>val;
     n=new node;
     n->data=val;
     n->next=NULL;
     while(temp->next!=NULL)
     {
         temp= temp->next;
     }
     temp ->next=n;
 }

 void sll::insert_after(node *head)
 {
     node *temp, *n;
     int val,d;
     temp=head;
     cout<<"\nEnter the number: ";
     cin>>val;
     n=new node;
     n->data=val;
     n->next=NULL;
     cout<<"\nEnter the data of node after which you want to insert a node: ";
     cin>>d;
     while(temp->next!=NULL)
     {
         if(temp->data==d)
         break;
         else
         temp=temp->next;
     }
     if(temp==NULL)
       cout<<"\nNode not found";
    else
    {
        n->next=temp->next;
        temp->next=n;
    }
 }

 node *sll::remove(node * head)
 {
     node *curr, *prev;
     int d;
     curr=head;
     while(curr!=NULL)
     {
         if(curr->data<0)
         break;
         else
         {
             prev=curr;
             curr=curr->next;
         }
     }
     if(curr==NULL)
     cout<<"\nNode not found";
     else
     {
         if(curr==head)
         head=head->next;
         else
         prev->next=curr->next;
     }
      if(curr==NULL)
    cout<<"\nNode not found";
   else
   {
      if(curr==head)
         head=head->next;
      else
         prev->next=curr->next;
         curr->next=NULL;
         cout<<"\nNode deleted";
   }
   return(head);
 }
 node *sll::createsorted()
{
  node *n,*temp,*prev,*head;
  int val;
  char ch;
  temp = NULL;
  head = NULL;
  do
  {

     cout<<"\nEnter the number: ";
     cin>>val;
     n=new node;
     n->data=val;
     n->next=NULL;

     if(head==NULL)
     {
       head=n;

     }
      else
       {
         n->next=prev->next;
         prev->next=n;
       }
     cout<<"Do you want to insert more nodes? ";
     cin>>ch;
 }while(ch=='y');
  return (head);
}
node *sll:: merge(node *head1, node *head2)
{
    node *head3;
    head=NULL;
    if(head1==NULL)
    return (head2);
    else if(head2==NULL)
    return (head1);

    if(head->data<=head2->data)
    {
        head3=head1;
        head3->next=merge(head1->next,head2);
    }

    else
    {
        head3=head2;
        head->next=merge(head1,head2->next);
    }
    return (head3);
}

void sll::display(node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main()
{
    int ch,ch1;
    char c,c1;
    node *head ,*head1,*head2,*head3;
    sll s;
    do 
    {
        cout<<"\nSelect a choice";
        cout<<"\n1.Create\n2.Display\n3.Insert\n4.Remove\n5.Create sorted\n";
        cin>>ch;
        switch(ch)
        {
            case 1: head=s.create();
            break;
            case 2: s.display(head);
            break;
            case 3: do 
                   {
                       cout<<"\nSelect a choice";
                       cout<<"\n1.Inset_beg\n2.Insert_end\n3.Insert_after\n";
                       cin>>ch1;
                       switch(ch1)
                       {
                           case 1: head=s.insert_beg(head);
                           break;
                           case 2: s.insert_end(head);
                           break;
                           case 3: s.insert_after(head);
                           break;
                       }

                   
                   cout<<"\ndo you want to cont? ";
                   cin>>c1;
                   }while(c1=='y');
                   break;
            case 4 : head =s.remove(head);
                   break;
             case 5: cout<<"\nEnter the list of positive nos: ";
             head1=s.createsorted();
             s.display(head1);
             cout<<"\nEnter the list of negative nos: ";
             head2=s.createsorted();
             s.display(head2);
             cout<<"\nThe sorted list is: ";
             head3 = s.merge(head1, head2);
             cout<<"\n";
             s.display(head3);
             break;            
        }
        cout<<"\nDo you want to cont? ";
        cin>>c;
    }while(c=='y');
    }
