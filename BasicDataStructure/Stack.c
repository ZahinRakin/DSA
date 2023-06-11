#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

Node* head;
Node* newNode;

void push(int);
void pop();
void print(Node*);

void main(){
    head = NULL;
    for(;;){
        int ch;
        printf("\n1. push\n2. pop\n= ");
        scanf("%d",&ch);
        if(ch == 1){
            int data;
            printf("data: ");
            scanf("%d",&data);
            push(data);
        }
        else if(ch == 2)
            pop();
        else {
            continue;
        }
        print(head);
    }
}

void push(int data){
    newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void pop(){
    Node* temp = head;
    head = head->next;
    free(temp);
}

void print(Node* p){
    while(p){
        printf("%d ",p->data);
        p = p->next;
    }
}