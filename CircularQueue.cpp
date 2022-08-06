#include <iostream>
using namespace std;

struct circularQueue
{
    int size;
    int rear;
    int front;
    int* arr;
};


int isFULL(struct circularQueue* &q){
    if((q->rear+1)%q->size==q->front){
        return 1;
    }
    else{
    return 0;
    }
}

int isEMPTY(struct circularQueue* &q ){
    if(q->front==q->rear){
        return 1;
    
    }
    else {
        return 0;
    }
}

 void enqueue(struct circularQueue* &q, int a){
     if(isFULL(q)){
         cout<<"queue full"<<endl;
        
     }
     else{
         q->rear=(q->rear+1)%q->size;
         q->arr[q->rear]=a;
     }
 }


int dequeue(struct circularQueue* &q){
    int x=-1;
        if(q->front=q->rear){
        cout<<"queue is empty \n"<<endl;
        }
    
        else{
       q->front=(q->front+1)%q->size;
       x=q->arr[q->front];

    }

    return x;
}


int main() {
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    struct circularQueue* q=(struct circularQueue*)malloc(sizeof(struct circularQueue));
    q->size=n;
    q->rear=q->front=-1;
    q->arr=(int*)malloc(q->size*(sizeof(int)));

    //enqueing few elements

    enqueue(q,23);
    enqueue(q,12);
    enqueue(q,7);
    enqueue(q,48);
    enqueue(q,85);

    cout<<"dequeing element is:%d\n"<<dequeue(q)<<endl;
    cout<<"dequeing element is:%d\n"<<dequeue(q)<<endl;
    cout<<"dequeing element is:%d\n"<<dequeue(q)<<endl;
    cout<<"dequeing element is:%d\n"<<dequeue(q)<<endl;
    
    if(isEMPTY(q))
    {
        cout<<"queue is empty"<<endl;
    
    }

    if(isFULL(q)){
        cout<<"queue is full"<<endl;
    }

    return 0;

}