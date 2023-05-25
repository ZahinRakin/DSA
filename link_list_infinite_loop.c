#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node{
    int value;
    struct node *next;
}*head,*new_node;

void add(struct node *);

void print(struct node *);

void main(){
    head = NULL;
    for( ; ; ){
        if(head){
           printf("\nThis is the link list:\n");
           print(head); 
           printf("\n");
        }
        int choice;
        printf("Do you want to add more?\n1) Yes.\n2) No\n= ");
        scanf("%d",&choice);
        if(choice == 1)
            add(head);
        else
            exit(0);
        printf("\nThis is after adding new node:\n");
        print(head);
    }
}

void print(struct node *p){
    int i = 1;
    while(p){
        printf("%d) %d\n",i,p->value);
        i++;
        p = p->next;
    }
}

void add(struct node *p){
    new_node = malloc(sizeof(struct node));
    printf("What would be the value: ");
    scanf("%d",&new_node->value);
    new_node->next = head;
    head = new_node;
}