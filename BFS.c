#include <stdio.h>
#include <stdlib.h>
#define max 50

int mat[max][max];
int vert;
int  ds[max];
int color[max] = {0};
int q[max];
int front = 0;
int rear = 0;

void BFS(int s);
void push(int);
void pop();
int getFront();

void main(){
    printf("verteces: ");
    scanf("%d",&vert);
    printf("matrix:\n");
    for(int i =0 ; i < vert ; i++)
        for(int j = 0 ; j < vert ; j++)
            scanf("%d",&mat[i][j]);
    printf("BFS: ");
    BFS(3);
}

void BFS(int s){
    color[s] = 1;
    ds[s] = 0;
    push(s);
    while(front != rear){
        s = getFront();
        pop();
        for(int i = 0 ; i < vert ; i++){
            if(!color[i] && mat[s][i]){
                color[i] = 1;
                ds[i] = ds[s] + 1;
                push(i);
            }
        }
    }
}

void push(int s){
    q[rear++] = s;
}

void pop(){
    printf("%d ",q[front++]);
}

int getFront(){
    return q[front];
}