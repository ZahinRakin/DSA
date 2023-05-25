#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack{
    int value;
    struct stact* link;
}*new_node;

struct stack* head = NULL;

void push(struct stack*);

void pop(struct stack*);

void main(){}

void push(struct stack *p){
    new_node = malloc(sizeof(struct stack));
    
}