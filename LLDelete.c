#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int x;
    struct node* link;
}*head,*new_node;

void print(struct node*);

void add_first();

void add_mid(struct node*);

void add_last(struct node*);

void delete_first(struct node*);

void delete_mid(struct node*);

void delete_last(struct node*);



void main(){
    head = NULL;
    for(;;){
        printf("\nLInk LIst:\n");
        print(head);
        printf("\n");


        int choice;
        printf("Choose:\n");
        printf("1) add first\n2) add mid\n3) add last \n4) delete first\n5) delete mid\n6) delete last\n= ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add_first();
                break;
            case 2:
                add_mid(head);
                break;
            case 3:
                add_last(head);
                break;
            case 4:
                delete_first(head);
                break;
            case 5:
                delete_mid(head);
                break;
            case 6:
                delete_last(head);
                break;
        }
    }
    

}

void print(struct node *p){
    int i = 1;
    while(p){
        printf("%d. %d\n",i,p->x);
        p = p->link;
        i++;
    }
}

void add_first(){
    new_node = malloc(sizeof(struct node));
    printf("Give the value: ");
    scanf("%d",&new_node->x);
    new_node->link = head;
    head = new_node;
}

void add_mid(struct node*p){
    printf("postion:\n");

    int n;
    scanf("%d",&n);



    new_node = malloc(sizeof(struct node*));
    for(int i = 1 ; i < n-1 ; i++){                         //i willl check later if there is any error
        p = p->link;
    }



    printf("enter value: ");
    scanf("%d",&new_node->x);

    new_node->link = p->link;
    p->link = new_node;

}

void add_last(struct node*p){
    while(p->link){
        p = p->link;
    }

    new_node = malloc(sizeof(struct node));
    printf("value: ");
    scanf("%d",&new_node->x);
    new_node->link = NULL;
    p->link = new_node;
    
}

void delete_first(struct node* p){
    head = p->link;
}

void delete_mid(struct node*p){

    int n;
    printf("position: ");
    scanf("%d",&n);

    for(int i = 1 ; i < n-1 ; i++){
        p = p->link;
    }
    p->link = (p->link)->link;
}

void delete_last(struct node*p){
    while((p->link)->link){
        p = p->link;
    }
    p->link = NULL;
}