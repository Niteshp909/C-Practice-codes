
#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x){
    if(rear == N-1){
        printf("Overflow");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] =x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("underflow");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("%d",queue[front]);
        front++;
    }
}

void display(){
    if(front = -1 && rear == -1){
        printf("Underflow");
    }
    else{
    for(int i = front;i<rear+1;i++){
        printf("%d\n",queue[i]);
    }
        
    }
}

void main(){
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    dequeue(2);
    display();
}

