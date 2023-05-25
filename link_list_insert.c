#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node *next;
} *extra_value;

void print(struct node*);

void insert(struct node*);


void main(){
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *head;


    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->value = 234;
    two->value = 341;
    three->value = 980;
    

    head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;
    
    printf("Values before changing\n");
    print(head);
    
    insert(head);
    printf("After the change\n");
    print(head);
}

void print(struct node *p){
    int i = 1;
    while(p){
        printf("%d) %d.\n",i,p->value);
        p = p->next;
        i++;
    }
}


void insert(struct node *p){
    int n;
   

    extra_value = malloc(sizeof(struct node));

    printf("Which position do you want to change(except for the first position)    :")     ;
    scanf("%d",&n);
    printf("What would be the value: "   );
    scanf("%d",&extra_value->value);

    int i;
    for( i = 1  ; i < n-1 ; i++){
        p = p->next;
    }
    
    
    extra_value->next = p->next;
    p->next = extra_value;

}