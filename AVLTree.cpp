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
int getHeight(node* root)
{
    if(root==NULL)
    return 0;
    return max(getHeight(root->right),getHeight(root->left))+1;

}
node* rightRot(node* y)
{
    node* x=y->left;
    node* temp=x->right;
    x->right=y;
    y->left=temp;
    return x;
}
node* leftRot(node* x)
{
    node* y=x->right;
    node* temp=y->left;
    y->left=x;
    x->right=temp;
    return y;
}

int getBalanceFactor(node* n){
    if(n==NULL){
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

node* insert(node* root, int key){
    if (root == NULL)
    {
        node* n = new node(key);
        return n ;
    }
 
    if (key < root->data)
        root->left  = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    int bf = getBalanceFactor(root);
 
    // Left Left Case
        if(bf>1 && key < root->left->data){
            return rightRot(root);
        }
    // Right Right Case
        if(bf<-1 && key > root->right->data){
            return leftRot(root);
        }
    // Left Right Case
    if(bf>1 && key > root->left->data){
            root->left = leftRot(root->left);
            return rightRot(root);
        }
    // Right Left Case
    if(bf<-1 && key < root->right->data){
            root->right = rightRot(root->right);
            return leftRot(root);
        }
    return root;
}

void PreOrder(node* &root)
{
    if(root==NULL)
    return;
    cout<<root->data<<"->";
    PreOrder(root->left);
    PreOrder(root->right);
}

int main()
{ 
    node * root = NULL;
 
 
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    PreOrder(root);
    return 0;
}