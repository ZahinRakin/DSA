#include <stdio.h>
#include <stdlib.h>

int matrix[10][10],vertices,d[10],f[10],prev[10],color[10],time;//discovery time , final time;

void DFS_Visit(int vertex){
    color[vertex]=1;
    time++;
    d[vertex]=time;
    for(int i=0;i<vertices;i++){
        if(matrix[vertex][i]==1 && color[i]==0){
            prev[i]=vertex;
            DFS_Visit(i);
        }
    }
    printf("%d--",vertex);
    color[vertex]=2;
   
    f[vertex]=++time;

}

int main(){

    printf("Enter the number of vertices: ");
    scanf("%d",&vertices);

    printf("\nEnter the matrix: \n");
    for(int i=0;i<vertices;i++)
        for(int j=0;j<vertices;j++){
            scanf("%d",&matrix[i][j]);
        }

    for(int i=0;i<vertices;i++){
        color[i]=0;
        prev[i]=-1;
        f[i]=9999;
        d[i]=9999;
    }

    time=0;
    printf("\ntraversal is-->\n");
    for(int i=0;i<vertices;i++){
        if(color[i]==0) DFS_Visit(i);
    }
}