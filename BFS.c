#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_VERTEX 50

typedef struct graph_t{
    int vertex;
    bool adj[MAX_VERTEX][MAX_VERTEX];
}graph;

graph* createGraph(int);
void BFS(graph* , int);

void main(){
    graph* g = createGraph(5);
    g->adj[0][1] = true;
    g->adj[1][0] = true;
    g->adj[0][2] = true;
    g->adj[2][0] = true;
    g->adj[0][3] = true;
    g->adj[3][0] = true;
    g->adj[2][3] = true;
    g->adj[3][2] = true;
    g->adj[1][4] = true;
    g->adj[4][1] = true;
    printf("this is the graph:\n");

    printf("here is the BFS traversal: ");
    BFS(g , 2);
}

graph* createGraph(int vertex){
    graph* g = malloc(sizeof(graph));
    g->vertex = vertex;
    bool adj[vertex][vertex];
    for(int i = 0 ; i < vertex ; i++)
        for(int j = 0 ; j < vertex ; j++)
            adj[i][j] = false;
    return g;
}

void BFS(graph* g , int s){
    int i = 0;
    int j = 0;
    bool visited[g->vertex];
    for(int ii = 0 ; ii < g->vertex ; ii++)
        visited[ii] = false;
    int queue[g->vertex];
    visited[s] = true;
    queue[j++] = s;
    while(i!=j){
        s = queue[i++];
        printf("%d ",s);
        for(int k = 0 ; k < g->vertex ; k++){
            if(!visited[k] && g->adj[s][k]){
                visited[k] = true;
                queue[j++] = k;
            }
        }
    }
}