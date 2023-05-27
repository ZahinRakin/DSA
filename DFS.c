#include <stdio.h>
#include <stdlib.h>
#define MAX_VERT 50

int mat[MAX_VERT][MAX_VERT];
int vert;
int color[MAX_VERT] = {0};

void DFS(int);

void main(){
    printf("verteces: ");
    scanf("%d",&vert);
    printf("matrix:\n");
    for(int i =0 ; i < vert ; i++)
        for(int j = 0 ; j < vert ; j++)
            scanf("%d",&mat[i][j]);
    printf("DFS: ");
    DFS(3);
}

void DFS(int s){
    color[s] = 1;
    for(int i = 0 ; i < vert ; i++){
        if(!color[i] && mat[s][i])
            DFS(i);
    }
    printf("%d ",s);
    color[s] = 2;
}