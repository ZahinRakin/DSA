#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char data;
    struct node* next;
}Node;

Node* head;
Node* newNode;

void push(char);
char pop();
void print(Node*);

void main(){
    char sentence[80];
    scanf("%s",&sentence);
    getchar();
    int length = sizeof(sentence)/sizeof(*sentence);
    int i;
    for(i = 0 ; i <= length/2 ; i++){
        push(sentence[i]);
    }
    while(i < length){
        if(pop() == sentence[i]){
            printf("%c",sentence[i]);
            i++;
            
        }
        else {
            printf("not palindrome");
            exit(0);
        }
    }
    printf("palindrome");
}

void push(char data){
    newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

char pop(){
    Node* temp = head;
    head = head->next;
    return temp->data;
}

