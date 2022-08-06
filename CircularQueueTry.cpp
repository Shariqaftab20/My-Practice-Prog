#include <iostream>
using namespace std;
struct node{
    int size;
    int f;
    int r;
    int* arr;
    
};
int isfull(struct node* p){
    if(p->r==p->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct node*p,int data){
 if(isfull(p)){
     cout<<"cant insert"<<endl;
 }
 else{
     p->r++;
     p->arr[p->r]=data;
 }
}
int isempty(struct node*p){
    if(p->f==p->r){
        return 1;
    }
    return 0;
}
int dq(struct node*p){
    int a=-1;
    if(p->f==p->r){
        cout<<"nothing to dq"<<endl;
        }
        else{
            p->f++;
            a=p->arr[p->f];
            }
            return a;
}

 void qtraversal(struct node*p){
     while(p->f!=p->r){
         p->f++;
         int a=p->arr[p->f];
         cout<<a<<endl;
     }
 }


int main(){
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    struct node* sp=(struct node*)malloc(sizeof(struct node));
    sp->size=n;
    sp->f=sp->r=-1;
    sp->arr=(int*)malloc(sp->size*(sizeof(int)));
if(isempty(sp)){
    cout<<"the queue is empty"<<endl;
}
if(isfull(sp)){
    cout<<"the queue is full"<<endl;
}
enqueue(sp,13);
enqueue(sp,1);
enqueue(sp,25);
enqueue(sp,2);
enqueue(sp, 1);
qtraversal(sp);
//cout<<"dequeuing element is:"<<dq(sp)<<endl;
//cout<<"dequeuing element is:"<<dq(sp)<<endl;
//cout<<"dequeuing element is:"<<dq(sp)<<endl;
if(isempty(sp)){
    cout<<"the queue is empty"<<endl;
}
if(isfull(sp)){
    cout<<"the queue is full"<<endl;
}
    return 0;
}