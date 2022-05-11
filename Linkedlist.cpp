#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void insertatbeg(node **head,int d)
{
    node *ptr=new node();
    ptr->data=d;
    ptr->next=*head;
    *head=ptr;
}
void insertbetween(node **head,int d,int i)
{
  node *ptr=new node();
  node *p=*head;
  int s=0;
  ptr->data=d;
  while(s!=i-1)
  {
      p=p->next;
  }
  ptr->next=p->next;
  p->next=ptr;
}
void insertatend(node **head,int d)
{
    node *ptr= new node();
    ptr->data=d;
    if(*head==NULL)
    {
    	*head=ptr;
	}
	else{
    node *p=*head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    }
}
void deleteatfirst(node **head)
{
    node *ptr=*head;
    *head=ptr->next;
    delete ptr;
}
void deleteatbetween(node **head,int i)
{
  node *p=*head;
  node *q=p->next;
  int s=0;
  while(s!=i-1)
  {
      p=p->next;
      q=q->next;
      s++;
  }
  p->next=q->next;
  delete q;
}
void deleteatlast(node **head)
{
    node *p=*head;
    node *q=p->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    delete q;
}
void deletewithagivenkey(node **head,int d)
{
    node *p=*head;
    node *q=p->next;
    while(q->data!=d && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==d)
    {
        p->next=q->next;
        delete q;
    }
}
void display(node *p)
{
    cout<<"The list is:"<<endl;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}


int main()
{
    node *head=NULL;
    int ch,d,i,k;
    do{
        cout<<"1.Insert at begining."<<endl;
        cout<<"2.Insert in beetween."<<endl;
        cout<<"3.Insert at end."<<endl;
        cout<<"4.Delete at First"<<endl;
        cout<<"5.Delete in between"<<endl;
        cout<<"6.Delete at end"<<endl;
        cout<<"7.Delete with a given key"<<endl;
        cout<<"8.Display"<<endl;
        cout<<"9.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        if(ch<4)
        {
        cout<<"Enter the data:";
        cin>>d;
        }
        switch(ch)
        {
            case 1:
                insertatbeg(&head,d);
            break;
            case 2:
                cout<<"Enter the index :";
                cin>>i;
                insertbetween(&head,d,i);
            break;
            case 3:
                insertatend(&head,d);
            break;
            case 4:
                deleteatfirst(&head);
            break; 
            case 5:
                cout<<"Enter the index :";
                cin>>i;
                deleteatbetween(&head,i); 
            break; 
            case 6:
                deleteatlast(&head);
            break;
            case 7:
                cout<<"Enter the key :";
                cin>>k;
                deletewithagivenkey(&head,k);
            break;     
            case 8:
                display(head);   
            break;
            default:cout<<"Wrong choice!!!!!"<<endl ;            
        }
    }while(ch!=9);
    return 0;
}
