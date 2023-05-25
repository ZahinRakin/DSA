#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int value;
    struct node* next;
};
struct node *head = NULL;
struct node *newNode;



void print(struct node*);

void push();

void pop(struct node*);

void main(){
    for(;;){
        int choice;
        printf("1) push;\n2) pop\n");
        scanf("%d",&choice);
        if(choice == 1)
            push();
        else
            pop(head);
    }
}

void push(){
    newNode = malloc(sizeof(struct node*));
    printf("value:");
    scanf("%d",&newNode->value);
    newNode->next = head;
    head = newNode;
}

void pop(struct node *p){
    while((p->next)->next)
        p = p->next;

}

void print(struct node *p){
    while(p){
        printf("%d\n",p->value);
        p = p->next;
    }
}