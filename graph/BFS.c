#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTECES 50

int mat[MAX_VERTECES][MAX_VERTECES];
int verteces;
int color[MAX_VERTECES] = {0};
int prev[MAX_VERTECES] = {-1};
int dt[MAX_VERTECES] = {99999};
int ft[MAX_VERTECES] = {99999};
int time = 0;

void BFS(int);

void main(){
    printf("verteces: ");
    scanf("%d",&verteces);
    for(int i = 0 ; i < verteces ; i++)
        for(int j = 0 ; j < verteces ; j++)
            scanf("%d",&mat[i][j]);
    printf("BFS: ");
    BFS(3);
}

void BFS(int s){
    color[s] = 1;
    dt[s] = ++time;
    int queue[verteces];
    int front = 0;
    int rear = 0;
    queue[rear++] = s;
    while(front != rear){
        s = queue[front++];
        printf("%d ",s );
        ft[s] = ++time;
        color[s] = 2;
        for(int i = 0 ; i < verteces ; i++){
            if(!color[i] && mat[s][i]){
                prev[i] = s;
                color[i] = 1;
                dt[i] = ++time;
                queue[rear++] = i;
            }
        }
    }

}