#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* L;
    struct node* R;
}Node;

Node *Root;

void inOrder(Node *);
Node *delete_bst(Node *);
Node *findSuccessor(Node *,Node *);

void main() {
    Root = NULL;
    Node *A, *B, *C, *D, *E, *F;
    A = (Node *) malloc(sizeof(Node));
    B = (Node *) malloc(sizeof(Node));
    C = (Node *) malloc(sizeof(Node));
    D = (Node *) malloc(sizeof(Node));
    E = (Node *) malloc(sizeof(Node));
    F = (Node *) malloc(sizeof(Node));

    A->data = 5;
    B->data = 1;
    C->data = 0;
    D->data = 3;
    E->data = 9;
    F->data = 7;

    Root = A;

    A->L = B;
    A->R = F;
    B->L = C;
    B->R = D;
    C->L = NULL;
    C->R = NULL;
    D->L = NULL;
    D->R = NULL;
    F->L = NULL;
    F->R = E;
    E->L = NULL;
    E->R = NULL;
}

void inOrder(Node *root){
    if(!root)
        return;
    inOrder(root->L);
    printf("%d ",root->data);
    inOrder(root->R);
}

Node *findSuccessor(Node *root , Node *node){
    if()
}