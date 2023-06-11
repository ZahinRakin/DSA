#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

Node* front = NULL;
Node* rear = NULL;

void enq(int);
void deq();
void print(Node*);

void main(){
    for(;;){
        int ch;
        printf("\n1. en\n2. de\n= ");
        scanf("%d",&ch);
        if(ch == 1){
            printf("value: ");
            int data;
            scanf("%d",&data);
            enq(data);
        }
        else deq();
        print(front);
    }
}

void enq(int val){
    Node* newNode = malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    if(front == NULL && rear == NULL)
        front = rear = newNode;
    else{
        rear->next = newNode;
        rear = newNode;
    }
}

void deq(){
    if(front == NULL)return;
    else{
        Node* temp = front;
        front = front->next;
        if(front == NULL)
            rear = NULL;
        free(temp);
    }
}

void print(Node* p){
    while(p){
        printf("%d ",p->data);
        p = p->next;
    }
}