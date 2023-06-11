#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct leaf{
    int data;
    struct leaf* l;
    struct leaf* r;
}Leaf;

Leaf* Root = NULL;

void addLeaf();
void BinSearAdd(Leaf*, Leaf*);
void in(Leaf*);
void pre(Leaf*);

void main(){
    for(;;){
        addLeaf();
        printf("Inorder:");
        in(Root);
        printf("\nPreorder:");
        pre(Root);
        printf("\n");
    }
}

void addLeaf(){
    Leaf* newNode = malloc(sizeof(Leaf));
    printf("value: ");
    scanf("%d",&newNode->data);
    newNode->l = NULL;
    newNode->r = NULL;
    if(Root == NULL){
        Root = newNode;
    }
    else BinSearAdd(Root, newNode);
}

void BinSearAdd(Leaf* root, Leaf* Input){
    if(root){
        if(Input->data <= root->data){
            if(root->l)
                BinSearAdd(root->l,Input);
            else{
                root->l = Input;
            }
        }
        else{
            if(root->r)
                BinSearAdd(root->r, Input);
            else
                root->r = Input;
        }
    }
}

void pre(Leaf *l){
    if(l){
        printf("%d ",l->data);
        pre(l->l);
        pre(l->r);
    }
}

void in(Leaf* l){
    if(l){
        in(l->l);
        printf("%d ",l->data);
        in(l->r);
    }
}