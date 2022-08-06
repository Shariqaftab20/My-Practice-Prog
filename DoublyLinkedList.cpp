#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void Delete(node* &head,int pos)
{
    if(pos==0)
    {
        node* todelete=head;
        head=head->next;
        head->prev=NULL;
        delete todelete;
        return;
    }

    node* temp=head;
    int c=0;
    while(temp!=NULL&&c!=pos)
    {
        temp=temp->next;
        c++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;
    delete temp;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    head->prev=n;
    head=n;

}
void insertAtEnd(node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
int main()
{
    node* head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    display(head);
    insertAtHead(head,0);
    display(head);
    Delete(head,0);
    display(head);
return 0;
}