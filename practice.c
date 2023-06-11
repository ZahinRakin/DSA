#include <stdio.h>
#include <stdlib.h>
#define max 50

int mat[max][max];
int vert;
int color[max] = {0};
int ds[max] = {99999};
int Q[max] = {0};
int front = 0;
int rear = 0;

void BFS(int);
void push(int);
void pop();
int getF();

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
        s = getF();
        pop();
        for(int i = 0; i < vert; i++){
            if(mat[s][i] && !color[i]){
                color[i] = 1;
                ds[i] = ds[s] + 1;
                push(i);
            }
        }
    }
}

void push(int s){
    Q[rear++] = s;
}

void pop(){
    printf("%d ",Q[front++]);
}

int getF(){
    return Q[front];
}