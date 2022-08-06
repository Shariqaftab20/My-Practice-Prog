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
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;
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
node* AppendAtK(node* &head,int k)
{
    node* newhead=head;
    node* newTail=head;
    node* temp=head;
    int c=1;
    while(temp->next!=NULL)
    {
        if(c==k)
        {
            newhead=temp->next;//3
            newTail=temp;//2
            //newTail->next=NULL;
        }
        temp=temp->next;
        c++;
    }
    newTail->next=NULL;
    temp->next=head;
    return newhead;

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
    display(AppendAtK(head,3));
return 0;
}