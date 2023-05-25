#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node * next;
} *head;


void print(struct node *);
void add_first(struct node *);


void main(){
    struct node *a1;
    struct node *a2;
    struct node *a3;
    struct node *a4;


    a1 = malloc(sizeof(struct node));
    a2 = malloc(sizeof(struct node));
    a3 = malloc(sizeof(struct node));
    a4 = malloc(sizeof(struct node));
    


    a1->value = 11;
    a2->value = 22;
    a3->value = 33;
    a4->value = 44;

    head = a1;
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = NULL;

    printf("This is before change:\n");
    print(head);
    add_first(head);
    printf("this is after change:\n");
    print(head) ;
}


void print(struct node *p){
    while(p){
        printf("%d\n",p->value);
        p = p->next;
    }
}

void add_first(struct node *p){
    struct node *extra;
    extra = malloc(sizeof(struct node));
    printf("What do you want to add at the beginning: ");
    scanf("%d",&extra->value);
    
    extra->next = head;
    head  = extra;
}