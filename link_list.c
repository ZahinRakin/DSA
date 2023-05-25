#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char name[6];
    int value;
    struct node* next;
};

void print(struct node *);

void main(){
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;
    struct node *head = NULL;




    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    strcat(one->name,"Zahin");
    strcat(two->name,"Sakib");
    strcat(three->name,"Toha");
    strcat(four->name,"Rakib");


    one->value = 1;
    two->value = 43;
    three->value = 2;
    four->value = 0;


    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    print(head); 


}

void print(struct node *p){
    int i = 1;
    while(p){
        printf("%d) ",i);
        printf("%s",p->name);
        printf("    %d\n",p->value);
        i++;
        p = p->next;
    }
}