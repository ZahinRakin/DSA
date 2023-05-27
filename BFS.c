#include <stdio.h>
#include <stdlib.h>
#define MAX_VERT 50

int mat[MAX_VERT][MAX_VERT];
int vert;
int color[MAX_VERT];

void BFS(int);

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
    int queue[vert];
    int front = 0;
    int rear = 0;
    queue[rear++] = s;
    while(front != rear){
        s = queue[front++];
        printf("%d ",s);
        for(int i = 0 ; i < vert ; i++){
            if(!color[i] && mat[s][i]){
                color[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}