#include <stdio.h>
#include <stdlib.h>

int matrix[10][10];
int vertex;
int color[10] = {0};
int d[10] = {99999};
int f[10] = {99999};
int time = 0;
int prev[10] = {0};

void DFS(int);

void main(){
    printf("verteces: ");
    scanf("%d",&vertex);
    printf("Matrix:\n");
    for(int i = 0 ; i < vertex ; i++)
        for(int j = 0 ; j < vertex ; j++)
            scanf("%d",&matrix[i][j]);
    printf("DFS : ");
    for(int i = 0 ; i < vertex ; i++)
        if(!color[i])
            DFS(i);
}