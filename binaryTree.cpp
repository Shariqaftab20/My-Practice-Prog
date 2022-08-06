#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node* right;
    node* left;

    node(int val)
    {
        data = val;
        right=NULL;
        left=NULL;
    }

};
void PreOrder(node* &root)
{
    if(root==NULL)
    return;
    cout<<root->data<<"->";
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(node* &root)
{
    if(root==NULL)
    return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<"->";
}
void InOrder(node* &root)
{
    if(root==NULL)
    return;
    InOrder(root->left);
    cout<<root->data<<"->";
    InOrder(root->right);
}
bool isBST(node* &root)
{
    if(root==NULL)
    return true;
    if(isBST(root->left)&&isBST(root->right))
    {
        if((root->left==NULL||root->left->data<root->data)&&(root->right==NULL||root->right->data>root->data))
        return true;
    }
    return false;
}

void Insert(node* root , int key)
{
    node* prev = NULL;
    while(root!=NULL)
    {
        prev=root;
        if(key == root->data)
        {return;}
        else if ( key < root->data)
        {root=root->left;}
        else
        {root=root->right;}
    }
    node* N = new node(key);
    if(key<prev->data)
    prev->left=N;
    else
    prev->right=N;    
}

node* InPre(node* &root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

node* deleteNode(node* &root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left==NULL && root->right==NULL)
            return NULL;
        else if (root->left == NULL) {
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            node* temp = root->left;
            free(root);
            return temp;
        }
        node* temp = InPre(root);
        root->data = temp->data;
        root->left = deleteNode(root->left, temp->data);
    }
    return root;
}

int main()
{
    node* p=new node(3);
    node* p1=new node(1);
    node* p2=new node(4);

    p->left=p1;
    p->right=p2;
    cout<<"PRE-ODER"<<endl;
    PreOrder(p);
    cout<<endl;
    cout<<"POST-ODER"<<endl;
    PostOrder(p);
    cout<<endl;
    cout<<"IN-ODER"<<endl;
    InOrder(p);
    cout<<endl;

    bool BST = isBST(p);
    if(BST)
    cout<<"Yes the tree is a BST"<<endl;
    else 
    cout<<"No the tree is not a BST"<<endl;

    Insert(p,7);
    cout<<"After Insertion "<<endl;
    InOrder(p);

return 0;
}