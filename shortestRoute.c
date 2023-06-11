#include <stdio.h>
#include <stdlib.h>
#define max 50

int mat[max][max];
int vert;
int ds[max];
int color[max] = {0};
int q[max];
int front = 0;
int rear = 0;
int predecessor[max]; // Array to store the predecessor of each vertex

void BFS(int);
void push(int, int);
void pop();
int getFront();
void printShortestRoute(int, int);

int main(){
    printf("Vertices: ");
    scanf("%d",&vert);
    printf("Matrix:\n");
    for(int i = 0 ; i < vert ; i++)
        for(int j = 0 ; j < vert ; j++)
            scanf("%d",&mat[i][j]);

    int source = 0;
    int destination = 3;

    BFS(source);
    printShortestRoute(source, destination);

    return 0;
}

void BFS(int s){
    color[s] = 1;
    ds[s] = 0;
    push(s, -1); // Update push function to store predecessor
    while(front != rear){
        s = getFront();
        pop();
        // if (s == destination) // Break the loop when destination is reached
        //     break;
        for(int i = 0 ; i < vert ; i++){
            if(!color[i] && mat[s][i]){
                color[i] = 1;
                ds[i] = ds[s] + 1;
                push(i, s); // Update push function to store predecessor
            }
        }
    }
}

void push(int s, int pred){ // Update push function to store predecessor
    q[rear++] = s;
    predecessor[s] = pred;
}

void pop(){
    printf("%d ",q[front++]);
}

int getFront(){
    return q[front];
}

void printShortestRoute(int source, int destination){
    printf("\nShortest route from %d to %d: ", source, destination);

    // Backtrack from destination to source using the predecessor array
    int current = destination;
    while (current != -1) {
        printf("%d ", current);
        current = predecessor[current];
    }
}
