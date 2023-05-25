#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char value;
    struct node* left;
    struct node*right;
}*A,*B,*C,*D,*E,*F;

struct node *Root = NULL;

void print(struct node*);

void main(){
    A = malloc(sizeof(struct node));
    B = malloc(sizeof(struct node));
    C = malloc(sizeof(struct node));
    D = malloc(sizeof(struct node));
    E = malloc(sizeof(struct node));
    F = malloc(sizeof(struct node));


    A->value = 'a';
    B->value = 'f';
    C->value = 'q';
    D->value = 'r';
    E->value = 'd';
    F->value = 'n';

    A->left = E;
    B->left = D; 
    C->left = NULL;
    D->left = NULL;
    E->left = NULL;
    F->left = NULL;

    A->right = B;
    B->right = F;
    C->right = NULL;
    D->right = NULL;
    E->right = NULL;
    F->right = C;

    Root = A;

    print(Root);

    
}

void print(struct node*p){

    
}