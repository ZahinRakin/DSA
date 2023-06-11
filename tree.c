#include <stdio.h>//this is edited by me for educational purposes.!
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* L;
    struct node* R;
} node;

node* root;
node* newNode;

void addLeaf();
void binarySearch(node*,node*);
void in(node*);
void pre(node*);

void main(){
    root = NULL;
    for(;;){
        addLeaf();
        printf("\ninorder traversal:\n");
        in(root);
        printf("\n");
        printf("preorder traversal:\n");
        pre(root);
    }
}

void addLeaf(){
    newNode = (node*)malloc(sizeof(node));
    printf("\nvalue: ");
    scanf("%d",&newNode->data);
    newNode->L = NULL;
    newNode->R = NULL;

    if(root == NULL){
        root = newNode;
    }
    else{
        binarySearch(root , newNode);
    }
}

void binarySearch(node* Root , node* Input){
    while(Root){
        if(Input->data <= Root->data){
            if(Root->L)
                Root = Root->L;
            else{
                Root->L = Input;
                break;
            }
        }
        else{
            if(Root->R)
                Root = Root->R;
            else{
                Root->R = Input;
                break;
            }
        }
    }
}

void in(node* temp){
    if(temp == NULL)
        return;
    in(temp->L);
    printf("%d ",temp->data);
    in(temp->R);
}

void pre(node* temp){
    if(temp == NULL)
        return;
    printf("%d ",temp->data); 
    pre(temp->L);
    pre(temp->R);
}
