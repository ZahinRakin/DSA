#include <stdio.h>
#include <stdlib.h>
#define maxVer 50

int mat[maxVer][maxVer];
int color[maxVer] = {0};
int vert;
int time = 0;
int dt[maxVer] = {99999};
int ft[maxVer] = {99999};
int prev[maxVer] = {-1};

void DFS(int);

void main(){
    printf("vertex: ");
    scanf("%d",&vert);
    for(int i = 0; i < vert; i++)
        for(int j = 0; j < vert; j++)
            scanf("%d",&mat[i][j]);
    printf("DFS traversal:");
    for(int i = 0; i < vert; i++)
        if(!color[i])
            DFS(i);
}

void DFS(int v){
    color[v] = 1;
    dt[v] = ++time;
    for(int i = 0; i < vert; i++)
        if(mat[v][i] && !color[i]){
            prev[i] = v;
            DFS(i);
        }
    printf("%d ",v);
    color[v] = 2;
    ft[v] = ++time;
}
