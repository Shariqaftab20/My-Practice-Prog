#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if (head==NULL)
    {
        head=n;
        head->next=head;
        return;
    }
    node* temp=head;
    do{
        temp=temp->next;
    }while(temp->next!=head);
    temp->next=n;
    n->next=head;
}
void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        head->next=head;
        return;
    }
    n->next=head;
    node* temp=head;
    do{
        temp=temp->next;
    }while(temp->next!=head);
    temp->next=n;
    head=n;
}
void display(node* head)
{
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"CYCLE"<<endl;
}
void DeleteAtHead(node* &head)
{
    if(head==NULL)
    {
        cout<<"No element in the linked list"<<endl;
        return;
    }
    node* todelete=head;
    node* temp=head;
    do{
        temp=temp->next;
    }while(temp->next!=head);
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void Delete(node* &head,int val)
{
    if(head==NULL)
    {
        cout<<"No element in the linked list"<<endl;
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,0);
    display(head);
    Delete(head,3);
    display(head);
return 0;
}