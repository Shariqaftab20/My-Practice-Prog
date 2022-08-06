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
// void insertAtAnyPos(node* &head,int val,int pos)
// {
//     node* n=new node(val);
//     if(head==NULL)
//     {
//         head=n;
//         return;
//     }
//     node* temp=head;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;


// }
bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        return true;
        temp=temp->next;
    }
    return false;
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
void DeleteAtHead(node* &head)
{
    if(head==NULL)
    {
        cout<<"No element in the linked list"<<endl;
        return;
    }
    node* todelete=head;
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
node RevLinkedList(node* &head)
{
    node* prev=NULL;
    node* cur=head;
    node* nex;
    while(cur!=NULL)
    {
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
    }
    head=prev;
    return *head;
}
node* reverseRec(node* &head)
{
    if(head==NULL||head->next==NULL)
    return head;
    node* newHead = reverseRec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}
node* RevK(node* head,int k)
{
    node* prev=NULL;
    node* cur=head;
    node* nex;
    int c=0;
    while(cur!=NULL&&c<k)
    {
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
        c++;
    }
    if(nex!=NULL)
    {
        head->next=RevK(nex,k);
    }
    return prev;
}
void makeCycle(node* &head, int pos)
{
    node* temp=head;
    node* star=head;
    while(temp->next!=NULL)
    {
        if(temp->data==pos)
        star=temp;
        temp=temp->next;
    }
    temp->next=star;
}
bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL||fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return true;
    }
    return false;
}
void remCycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL||fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        break;
    }
    fast=head;
    while(fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;

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
    cout<<search(head,5)<<endl;
    Delete(head,3);
    display(head);
    DeleteAtHead(head);
    display(head);
    RevLinkedList(head);
    display(head);
    DeleteAtHead(head);
    insertAtHead(head,3);
    insertAtHead(head,4);
    head=reverseRec(head);
    display(head);
    head=RevK(head,2);
    display(head);
    makeCycle(head,4);
    //display(head);
    cout<<detectCycle(head)<<endl;
    remCycle(head);
    display(head);

return 0;
}